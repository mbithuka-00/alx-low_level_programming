#include "main.h"

/**
 * append_text_to_file - it appends text at the end of the file.
 * @filename: it points to the name of the file.
 * @text_content: its the string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 *AUTHOR: MATTHEW MBITHUKA
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, length);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}



