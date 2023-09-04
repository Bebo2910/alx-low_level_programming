#include "main.h"

/**
  * cp_function - cp
  * @argc: argc
  * @argv: argv
  * Return: exit
  *
  */

int cp_function(int argc, char *argv[])
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
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]), exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]), exit(99);
	}
	bytes = read(fd1, &buffer[0], BUF_SIZE);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]), exit(98);
	}
	bytes = write(fd2, &buffer[0], bytes);
	if (bytes == 0)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]), exit(99);
	}
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1), exit(100);
	}
	if (fd2)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2), exit(100);
	}

	return (EXIT_SUCCESS);
}
