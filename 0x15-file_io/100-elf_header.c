#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <stdio.h>
#include <errno.h>
#include <assert.h>
#include <stdint.h>

/* logs error and quits */
void log_error_n_quit(char * err, int er_no) 
{
  fprintf(stderr, "prntelf error: ");
  fprintf(stderr, "%s", err);
  if (er_no)  
    fprintf(stderr, "%s\n", strerror(er_no));
  else
    fprintf(stderr, "\n");
  exit(1);
}

char * load_file(const char * file_name) 
{
  /* Note: if we wanted to be hackery we could use mmap here 
    But I think this way is better, also only reason I load whole file into mem, is cause im gonna expan on this program
  */
  
  /* declare variables */
  int ret, writ;
  char * m;

  /* open The File */
  FILE * f = fopen(file_name, "rb");
  if (f == NULL)
    log_error_n_quit("Failed to open file: ", errno);
  
  /* get the size of the file (bytes) */
  if ( (ret = fseek(f, 0, SEEK_END) ) == -1) 
    log_error_n_quit("Failed to seek to end: ", errno);
  if ( (writ = ftell(f) ) == -1)
    log_error_n_quit("Faild to tell current file position: ", 0);
  
  /* allocate memory for the file */
  m = calloc(sizeof(char), writ);
  if (m == NULL)
    log_error_n_quit("Memory Allocation Error", errno);
  
  /* seek to beginning of file and check for errors */
  errno = 0;
  rewind(f);
  if (errno) {
    log_error_n_quit("Error seeking to beginning of file: ", errno);
  }
  
  /* Read the file into memory */
  if ( (ret = fread(m, writ, 1, f)) < writ) {
    if (ferror(f) != 0)
      log_error_n_quit("Error reading from file: ", errno);
    if (feof(f) != 0)
      log_error_n_quit("Error reading from file: EOF", 0); 
  }
  
  /* return pointer to heap allocated memory */
  return (char *)m;
}

void print_elf_hdr(Elf64_Ehdr * elf) 
{
int i;
  const char * unkown = "Unknown";
  
  printf("ELF Header: \n");

  /* magic number(s) [first 4 bytes + 7 unused bytes from the e_ident array at offset/index ] */ 
  printf("Magic:      %02X %c%c%c ", elf->e_ident[0], elf->e_ident[1], elf->e_ident[2], elf->e_ident[3]);
  for (i = 0; i < 7; i++) {
    printf("%02X ", elf->e_ident[EI_PAD + i]);
  }
  printf("\n");

  /* endianess & address size */
  printf("Class: ");
  switch (elf->e_ident[EI_CLASS]) {
    case 1:
      printf("%25s\n", "ELF32");
      break;
    case 2:
      printf("%25s\n", "ELF64");
      break;
    default:
      printf("%25s &", unkown);
      break;
  }
  printf("Data: ");
  switch (elf->e_ident[EI_DATA]) {
    case 1:
      printf("%25s2's complement, little endian\n", " ");
      break;
    case 2:
      printf("%25s2's complement, big endian\n", " ");
      break;
    default:
      printf("%25s\n", unkown);
      break;
  }
  
  /* Version (1) */
  printf("Version: %25X (current)\n", elf->e_ident[EI_VERSION]);
  
  /* Abi */
  printf("OS/ABI: %02X\n", elf->e_ident[EI_OSABI]);

  /* Object file type */
  printf("Type: ");
  switch (elf->e_type) {
    case ET_NONE:
      printf("%25s\n", unkown);
      break;
    case ET_REL:
      printf("%25sRELO (Relocatable file)\n", " ");
      break;
    case ET_EXEC:
      printf("%25sEXEC (Executable file)\n", " ");
      break;
    case ET_DYN:
      printf("%25sDYN (Shared object file)\n", " ");
      break;
    case ET_CORE:
      printf("%25sCF (Core File)\n", " ");
      break;
    default:
      printf("%25s\n", unkown);
  }
  

  /* Cpu architecture 
  printf("Cpu Architecture: ");
  switch (elf->e_machine) {
    case EM_NONE:
      printf("Unkown");
      break;
    case EM_386:
      printf("Intel x86");
      break;
    case EM_PPC:
      printf("Power PC 32 bit");
      break;
    case EM_X86_64:
      printf("AMD x86_64");
      break;
    case EM_IA_64:
      printf("Intel Titanium");
      break;
    default:
      printf("Not supported by this utility (:");
  }
  printf("\n"); */
/*
  elf version 
  printf("ELF version: ");
  switch (elf->e_version) {
    case EV_NONE:
      printf("Invalid Version\n");
      break;
    case EV_CURRENT:
      printf("Current Version\n");
      break;
    default:
      printf("Invalid Version\n");
  }
  */
  /* Generic Data */
  printf("Entry point address:     0x%lX\n", elf->e_entry);
  /*printf("Program Header Table Offset: 0x%lX\n", elf->e_phoff);
  printf("Section Header Table Offset: 0x%lX\n", elf->e_shoff);
  printf("Flags: 0x%02X\n", elf->e_flags);
  printf("ELF Header Size: 0x%02X\n", elf->e_ehsize);
  printf("Program Header Size: 0x%02X\n", elf->e_phentsize);
  printf("Number of Program Headers: 0x%02X\n", elf->e_phnum);
  printf("Section Header Size: 0x%02X\n", elf->e_shentsize);  
  printf("Number of Section Headers: 0x%02X\n", elf->e_shnum);
  printf("Section Names Entry Offset: 0x%02X\n", elf->e_shstrndx); // contains a pointer to the section header which contains the names of the sections
  */
}

void print_all_section_names(Elf64_Ehdr * elf, char * f) 
{
  /* declare variables */
  int i;
  char *sectn_hdr_tble, *sctn_name_str_table, *off, *str_table;
  Elf64_Shdr cur_sec;

  /* Section header table [0] */
  sectn_hdr_tble = f + elf->e_shoff;

  /* string table "section" (contains other section names) */
  sctn_name_str_table = (sectn_hdr_tble + (elf->e_shstrndx * elf->e_shentsize));
  assert(*(uint32_t *)(sctn_name_str_table + 4) == SHT_STRTAB); 
  str_table = f + (*(Elf64_Off *)(sctn_name_str_table + 24));

  /* str tables always start and end with null byte so another sanity check :)*/
  assert(*(str_table) == '\0');

  /* print all the names */
  for (i = 0; i < elf->e_shnum; i++) {
    printf("---------------------------------\n");
    
    /* copy section into struct */
    off = sectn_hdr_tble + (i * elf->e_shentsize);
    memcpy(&cur_sec, off, elf->e_shentsize);
    
    /* print section name */
    if (*(char *)(str_table + cur_sec.sh_name) == '\0')
      printf("Name: 0x%02X (No Name)\n", *(char *)(str_table + cur_sec.sh_name));
    else 
      printf("Name: %s\n", (char *)(str_table + cur_sec.sh_name));
    
    /* print type */
    printf("Type: ");
    switch (cur_sec.sh_type) {
      case SHT_NULL:
        printf("NULL\n");
        break;
      case SHT_PROGBITS:
        printf("Program Defined\n");
        break;
      case SHT_SYMTAB:
        printf("Symbol Table\n");
        break;
      case SHT_STRTAB:
        printf("String Table\n");
        break;
      default:
        printf("Unsupported by this utiltiy\n"); 
        break;
    }

    /* print flags */
    printf("Flags: ");
    if (cur_sec.sh_flags & SHF_WRITE)
      printf("W ");
    if (cur_sec.sh_flags & SHF_EXECINSTR)
      printf("X ");
    if (cur_sec.sh_flags & SHF_ALLOC)
      printf("R"); 
    if (cur_sec.sh_flags & SHF_MASKPROC)
      printf("Reserved");
    if (cur_sec.sh_flags == (uint64_t)0) 
      printf("0x00");
    printf("\n");

    printf("Memory Addr: 0x%02lX\n", cur_sec.sh_addr); 
    printf("File Offset (bytes): 0x%02lX\n", cur_sec.sh_offset);
    printf("Section Size (bytes): 0x%02lX\n", cur_sec.sh_size);
  }

}

int main(int argc, char ** argv) 
{
/* retrieve contents of the file */
char *f = load_file(argv[1]);
/* map first 64 bytes of file into elf header*/
Elf64_Ehdr elf_hdr;
  /* Usage Check */
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <filename>\n", *argv);
    return 1;
  }
memcpy(&elf_hdr, f, 64);

  /* print the elf header */
  print_elf_hdr(&elf_hdr);

 /* printf("------------\n"); */

/*  print_all_section_names(&elf_hdr, f); */

  /* free (f) */
  free(f);

  return 0;
}
