#include "main.h"

/**
 * create_file - creates a function that creates a file
 * @filename: variable filename.
 * @text_cotent: written file content.
 *
 * Return: 1 if it success. -1 if otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int nletters;
	int rwr;
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_descriptor, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
