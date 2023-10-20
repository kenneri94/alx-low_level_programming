#include "main.h"

/**
 * append_text_to_file - fuction that appends text at the end of a file
 * @filename: name of a file.
 * @text_content: content added.
 *
 * Return: 1 if the file exists. -1 if otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(file_descriptor, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
