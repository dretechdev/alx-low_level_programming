#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - This checks if a file is an elf file
 * @e_ident: This is a pointer to an array containing the ELF magic numbers
 * Description: Exit code 98 if the file is not an ELF file
 */

void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4, index++)
	{
		if 
			(
			 e_ident[index] != 127 &&
			 e_ident[index] != 'E' &&
			 e_ident[index] != 'L' &&
			 e_ident[index] != 'F'
			 )
			{
				dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
				exit(98);
			}
	}
}

/**
 * print_magic - This function prints the magic numbers of an ELF header
 * @e_ident: This is a pointer to an array containing the ELF magic numbers
 * Description: The Magic numbers are separated by spaces.
 */

void check_elf(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < E1_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == E1_NIDENT - 1)
			printf("\n");
		else
			print(" ");
	}
}

/**
 * print_class - This prints the class of an ELF header
 * @c_ident: This is a pointer to an array containing the ELF magic numbers
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                              ");

	switch (e_ident[E1_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELP32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - This function prints the data of an ELF header
 * @e_ident: This is the pointer to an array containing the ELF class
 */
void print_data(unsigned char *3_ident)
{
	printf("  Data:                                         ");
	
	switch (e_ident[EI_DATA])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - This prints the version of an ELF header
 * @e_ident: This is a pointer to an array containing the ELF version
 */

void print_version(unsigned char *e_ident)
{
	printf("   Version:                                   %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf("  (current)\n");
		breakk;
	default:
		printf("\n");
	}
}

/**
 *  print_osabi - This function prints OS/ABI of an ELF header
 *  @e_ident: This is a pointer to an array containing the ELF version
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                                    ");

	switch (e_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header
 * @e_ident: This is a pointer to an array containing the ELF ABI header
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                           %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - This function prints the type of an ELF header
 * @e_type: This is the ELF type
 * @e_ident: This is a pointer to an array containing the ELF class
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                                      ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocate file)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}
