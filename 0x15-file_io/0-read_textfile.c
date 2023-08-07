#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: letters printed, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t nread;
	ssize_t nwrite;

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}

	nread = read(f, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(f);
	free(buffer);

	return (nwrite);
}
