#include "main.h"

#define CANTREAD "Error: Can't read from file %s\n"
#define CANTWRITE "Error: Can't write to %s\n"
#define CANTCLOSE "Error: Can't close fd %d\n"
/**
  * main - cp
  * @argc: argc
  * @argv: argv
  * Return: exit
  *
  */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, CANTREAD, argv[1]), exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, CANTWRITE, argv[2]), exit(99);
	}
	while ((bytes = read(fd1, buffer, BUF_SIZE)) > 0)
	{
		if (bytes != write(fd2, buffer, bytes))
		{
			dprintf(STDERR_FILENO, CANTWRITE, argv[2]), exit(99);
		}
	}
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, CANTREAD, argv[1]), exit(98);
	}
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1)
	{
		dprintf(STDERR_FILENO, CANTCLOSE, fd1), exit(100);
	}
	if (fd2)
	{
		dprintf(STDERR_FILENO, CANTCLOSE, fd2), exit(100);
	}
	return (EXIT_SUCCESS);
}
