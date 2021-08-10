#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t 

	if (filename == NULL)
		return (0);

	fd = open (filename, 0-RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

}
