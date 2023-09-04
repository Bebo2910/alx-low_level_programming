#include "main.h"

/**
  * read_textfile - reading text file
  * @filename: file
  * @letters: letters
  * Return: -1 or 0
  *
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t numofbytes;
	char buffer[BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	numofbytes = read(file, &buffer[0], letters);
	numofbytes = write(STDOUT_FILENO, &buffer[0], numofbytes);
	close(file);

	return (numofbytes);
}
