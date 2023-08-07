#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- it  Reads text file print to STDOUT.
 * @filename:name of text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 *AUTHOR:MATT MBITHUKA
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_des;
	ssize_t w;
	ssize_t t;

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(file_des, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(file_des);
	return (w);
}


