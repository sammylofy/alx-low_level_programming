#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(const Elf64_Ehdr *header);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	Elf64_Ehdr elf_header;
	ssize_t read_status = read(fd, &elf_header, sizeof(elf_header));

	if (read_status != sizeof(elf_header) ||
			elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		       	elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not a valid ELF file\n");
		close(fd);
		exit(98);
	}

	lseek(fd, (off_t) elf_header.e_phoff, SEEK_SET); /* Move to the program header table */
	read(fd, &elf_header.e_phnum, sizeof(elf_header.e_phnum)); /* Read the program header number */

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:   %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:  %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - HP-UX");
	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:    %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("  Entry point address: 0x%lx\n", (unsigned long) header->e_entry);
}

