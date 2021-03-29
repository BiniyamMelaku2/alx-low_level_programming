#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

#pragma pack(push,1)
#pragma pack(pop)

#define EI_NIDENT       16

/* 32-bit ELF base types. */
typedef unsigned int Elf32_Addr;
typedef unsigned short Elf32_Half;
typedef unsigned int Elf32_Off;
typedef signed int Elf32_Sword;
typedef unsigned int Elf32_Word;

/* 64-bit ELF base types. */
typedef unsigned long long Elf64_Addr;
typedef unsigned short Elf64_Half;
typedef signed short Elf64_SHalf;
typedef unsigned long long Elf64_Off;
typedef signed int Elf64_Sword;
typedef unsigned int Elf64_Word;
typedef unsigned long long Elf64_Xword;
typedef signed long long Elf64_Sxword;

typedef struct elf32_hdr{
  unsigned char e_ident[EI_NIDENT];
  Elf32_Half    e_type;
  Elf32_Half    e_machine;
  Elf32_Word    e_version;
  Elf32_Addr    e_entry;  /* Entry point */
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word    e_flags;
  Elf32_Half    e_ehsize;
  Elf32_Half    e_phentsize;
  Elf32_Half    e_phnum;
  Elf32_Half    e_shentsize;
  Elf32_Half    e_shnum;
  Elf32_Half    e_shstrndx;
} Elf32_Ehdr;

typedef struct elf32_shdr {
  Elf32_Word    sh_name;
  Elf32_Word    sh_type;
  Elf32_Word    sh_flags;
  Elf32_Addr    sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word    sh_size;
  Elf32_Word    sh_link;
  Elf32_Word    sh_info;
  Elf32_Word    sh_addralign;
  Elf32_Word    sh_entsize;
} Elf32_Shdr;

typedef struct elf64_hdr {
  unsigned char e_ident[EI_NIDENT]; /* ELF "magic number" */
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;       /* Entry point virtual address */
  Elf64_Off e_phoff;        /* Program header table file offset */
  Elf64_Off e_shoff;        /* Section header table file offset */
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;       /* Section name, index in string tbl */
  Elf64_Word sh_type;       /* Type of section */
  Elf64_Xword sh_flags;     /* Miscellaneous section attributes */
  Elf64_Addr sh_addr;       /* Section virtual addr at execution */
  Elf64_Off sh_offset;      /* Section file offset */
  Elf64_Xword sh_size;      /* Size of section in bytes */
  Elf64_Word sh_link;       /* Index of another section */
  Elf64_Word sh_info;       /* Additional section information */
  Elf64_Xword sh_addralign; /* Section alignment */
  Elf64_Xword sh_entsize;   /* Entry size if section holds table */
} Elf64_Shdr;



int main(int argc, char **argv) 
{
  FILE* ElfFile = NULL;
  char* SectNames = NULL;
  Elf64_Ehdr elfHdr;
  Elf64_Shdr sectHdr;
  uint32_t idx;

  if(argc != 2) {
    printf("usage: %s <ELF_FILE>\n", argv[0]);
    exit(1);
  }

  if((ElfFile = fopen(argv[1], "r")) == NULL) {
    perror("[E] Error opening file:");
    exit(1);
  }

  // read ELF header, first thing in the file
  fread(&elfHdr, 1, sizeof(Elf64_Ehdr), ElfFile);

  // read section name string table
  // first, read its header. 
  /* 
   e_shoff         This member holds the section header table's file offset
                   in bytes.  If the file has no section header table, this
                   member holds zero.

   e_shstrndx      This member holds the section header table index of the
               entry associated with the section name string table.  If
           the file has no section name string table, this member
           holds the value SHN_UNDEF.

           If the index of section name string table section is
           larger than or equal to SHN_LORESERVE (0xff00), this
           member holds SHN_XINDEX (0xffff) and the real index of
           the section name string table section is held in the
           sh_link member of the initial entry in section header
           table.  Otherwise, the sh_link member of the initial
           entry in section header table contains the value zero.

           SHN_UNDEF     This value marks an undefined, missing,
                         irrelevant, or otherwise meaningless
                         section reference.  For example, a symbol
                         "defined" relative to section number
                         SHN_UNDEF is an undefined symbol.

           SHN_LORESERVE This value specifies the lower bound of the
                         range of reserved indices.

           SHN_LOPROC    Values greater than or equal to SHN_HIPROC
                         are reserved for processor-specific
                         semantics.

           SHN_HIPROC    Values less than or equal to SHN_LOPROC are
                         reserved for processor-specific semantics.

           SHN_ABS       This value specifies absolute values for
                         the corresponding reference.  For example,
                         symbols defined relative to section number
                         SHN_ABS have absolute values and are not
                         affected by relocation.

           SHN_COMMON    Symbols defined relative to this section
                         are common symbols, such as Fortran COMMON
                         or unallocated C external variables.

           SHN_HIRESERVE This value specifies the upper bound of the
                         range of reserved indices between
                         SHN_LORESERVE and SHN_HIRESERVE, inclusive;
                         the values do not reference the section
                         header table.  That is, the section header
                         table does not contain entries for the
                         reserved indices.
  */
  fseek(ElfFile, elfHdr.e_shoff + elfHdr.e_shstrndx * sizeof(sectHdr), SEEK_SET);
  fread(&sectHdr, 1, sizeof(sectHdr), ElfFile);
  /*
   sh_size       This member holds the section's size in bytes.  Unless the
                 section type is SHT_NOBITS, the section occupies sh_size
                 bytes in the file.  A section of type SHT_NOBITS may have a
                 nonzero size, but it occupies no space in the file.

   sh_offset     This member's value holds the byte offset from the
                 beginning of the file to the first byte in the section.
                 One section type, SHT_NOBITS, occupies no space in the
                 file, and its sh_offset member locates the conceptual
                 placement in the file.

   e_shnum       This member holds the number of entries in the section
                 header table.  Thus the product of e_shentsize and
                 e_shnum gives the section header table's size in bytes.
                 If a file has no section header table, e_shnum holds the
                 value of zero.

                 If the number of entries in the section header table is
                 larger than or equal to SHN_LORESERVE (0xff00), e_shnum
                 holds the value zero and the real number of entries in
                 the section header table is held in the sh_size member of
                 the initial entry in section header table.  Otherwise,
                 the sh_size member of the initial entry in the section
                 header table holds the value zero.   

   sh_name       This member specifies the name of the section.  Its value
                 is an index into the section header string table section,
                 giving the location of a null-terminated string.
   */
  // next, read the section, string data
  // printf("sh_size = %llu\n", sectHdr.sh_size);
  SectNames = malloc(sectHdr.sh_size);
  fseek(ElfFile, sectHdr.sh_offset, SEEK_SET);
  fread(SectNames, 1, sectHdr.sh_size, ElfFile);

  // read all section headers
  for (idx = 0; idx < elfHdr.e_shnum; idx++)
  {
    const char* name = "";

    fseek(ElfFile, elfHdr.e_shoff + idx * sizeof(sectHdr), SEEK_SET);
    fread(&sectHdr, 1, sizeof(sectHdr), ElfFile);

    // print section name
    if (sectHdr.sh_name)
      name = SectNames + sectHdr.sh_name;
    printf("%2u %s\n", idx, name);
  }

  return 0;
}
