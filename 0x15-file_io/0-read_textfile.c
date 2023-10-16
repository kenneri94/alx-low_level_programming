#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <font1.h>


/**
 * read_textfile - read the file text and prints to POSIX STDOUT
 * @filename: the variable of the file
 * @letters: letters number
 * Return: the exact number of letters read and print, otherwise 0
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{	/*initialize pointer, fd, ssize_t _read, _write*/
	char *buffer;
	ssize_t _read, _write;
	int fd;
	/*check file avaiability*/
	if (filename == NULL)
		return (0);
	/*file open*/
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	/*store to buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/*read textfile*/
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*write or print*/
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);
	return (_read);
}
