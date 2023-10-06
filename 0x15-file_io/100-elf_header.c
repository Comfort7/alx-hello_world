#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error_and_exit - Print an error message to stderr and
 * exit with status code 98.
 * @message: The error message to display.
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information from the ELF header.
 * @ehdr: Pointer to the ELF header.
 */
void print_elf_header_info(Elf64_Ehdr *ehdr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	printf("%02x ", ehdr->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
		ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
		ehdr->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n",
			ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			ehdr->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			ehdr->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
			ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" :
			(ehdr->e_type == ET_DYN ? "DYN (Shared object file)" :
			 "REL (Relocatable file)"));
	printf("  Entry point address:               %lx\n",
			(unsigned long)ehdr->e_entry);
}
/**
 * main - Entry point for the ELF header information program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to command-line arguments.
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		print_error_and_exit("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error_and_exit("Failed to open the file");
	}

	if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error_and_exit("Failed to read ELF header");
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1]
			!= ELFMAG1 ||
	ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_and_exit("Not an ELF file");
	}

	print_elf_header_info(&ehdr);
	close(fd);

	return (0);
}
