#include "main.h"

/**
 * create_file - it  Creates a file.
 * @filename: it directs a pointer to the name of the file to create.
 * @text_content: A pointer to a string to be written on the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 *AUTHOR:MATT MBITHUKA
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_des, text_content, length);

	if (file_des == -1 || w == -1)
		return (-1);

	close(file_des);

	return (1);
}


