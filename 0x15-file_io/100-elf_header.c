#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * closes_file - Closes a file.
 * @file: ELF file.
 */
void closes_file(int file)
{
if (close(file) == -1)
dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", file), exit(98);
}
/**
 * check_file - Checks file is ELF.
 * @rem: Remaining file content.
 */
void check_file(unsigned char *rem)
{
int c;
for (c = 0; c < 4; c++)
if (rem[c] != 127 && rem[c] != 'E' && rem[c] != 'L' && rem[c] != 'F')
dprintf(STDERR_FILENO, "Error: Not ELF file\n"), exit(98);
}
/**
 * print_elf_hdr - prints ELF high level header.
 * @elf: a valid elf header file
 */
void print_elf_hdr(Elf64_Ehdr *elf)
{
unsigned int type =  elf->e_type, c;
unsigned long int entry = elf->e_entry;
unsigned char *elf_file = elf->e_ident;

printf("ELF Header:\n");
/*print_magic - Prints magic of ELF file. magic: ELF magic numbers. */
printf("  Magic:   ");
for (c = 0; c < EI_NIDENT; c++)
{
printf("%02x", elf_file[c]);
c == EI_NIDENT - 1 ? printf("\n") : printf(" ");
}
/*print_class - Printf ELF class. class: ELF file. */
printf("  Class:                             ");
switch (elf_file[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", elf_file[EI_CLASS]);
}
/* print_data - Print ELF data file.*/
printf("  Data:                              ");
switch (elf_file[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", elf_file[EI_CLASS]);
}
/* print_version - Prints ELF version file. version: ELF file. */
printf("  Version:                           %d", elf_file[EI_VERSION]);
switch (elf_file[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
/* print_os_abi - Prints ELF OS/ABI file. */
printf("  OS/ABI:                            ");
switch (elf_file[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", elf_file[EI_OSABI]);
}
/*print_abi - Prinf ELF ABI version file. abi: ELF file. */
printf("  ABI Version:                       %d\n", elf_file[EI_ABIVERSION]);
/* print_type - Print ELF type file. type: ELF type. class: ELF Class */
if (elf_file[EI_DATA] == ELFDATA2MSB)
type >>= 8;
printf("  Type:                              ");
switch (type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", type);
}
/*print_entry - Print ELF entry. entry: ELF type. class: ELF Class */
printf("  Entry point address:               ");
if (elf_file[EI_DATA] == ELFDATA2MSB)
{
entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
entry = (entry << 16) | (entry >> 16);
}
if (elf_file[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)entry);
else
printf("%#lx\n", entry);
}

/**
 * main - Displays the information contained in the ELF header at the
 * @ac: Number of arguments passed into the program
 * @av: Array of arguments passed.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
Elf64_Ehdr *header;
int openn, readd;
if (ac != 2 || av[1] == NULL)
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]), exit(98);
openn = open(av[1], O_RDONLY);
if (openn == -1)
dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", av[1]), exit(98);
header = malloc(sizeof(Elf64_Ehdr));
if (!header)
{
dprintf(STDERR_FILENO, "Error: No memory allocated for %s\n", av[1]);
closes_file(openn), exit(98);
}
readd = read(openn, header, sizeof(Elf64_Ehdr));
if (readd == -1)
{
printf("Error: Cannot read file %s\n", av[1]);
free(header), closes_file(openn), exit(98);
}
check_file(header->e_ident);
print_elf_hdr(header);
free(header);
closes_file(openn);
return (0);
}
