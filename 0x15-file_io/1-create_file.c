#include "main.h"
/**
 * create_file - create a function that creates a file
 * @filename: name of the file
 * @text_content: content in the file
 * Return: 1 if success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int l;
	int rwrite;

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}

	for (l = 0; text_content[l]; l++)
		;

	rwrite = write(f, text_content, l);

	if (rwrite == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}
