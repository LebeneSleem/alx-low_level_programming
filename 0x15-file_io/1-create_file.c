#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer the file to be created
 * @text_content: string to be written to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int F_D, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	F_D = open(filename, O_CREAT | O_RDWR | O_TRUNC, 06000);

	w = write(F_D, text_content, length);

	if (F_D == -1 || w == -1)
		return (-1);

	close(F_D);

	return (1);
}
