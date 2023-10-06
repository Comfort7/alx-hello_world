#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 * Return: 0 on success, appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(fd_from);
		return (99);
	}
	while ((n = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	if (write(fd_to, buffer, n) != n)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
				argv[2]);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (n == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close(fd_from) == -1) ? fd_from : fd_to);
		return (100);
	}
	return (0);
}
