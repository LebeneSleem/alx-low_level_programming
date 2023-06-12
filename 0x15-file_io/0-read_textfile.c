#include "main.h"

/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to the file being read
 * @letters: number of letters to be read from the file and printed
 * Return: actual number of letters it could read and print (w)
 * or 0 if the file can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t F_D;
	ssize_t r;
	ssize_t w;
	char *Buffer;

	F_D = open(filename, O_RDONLY);

	if (F_D == -1)
		return (0);

	Buffer = malloc(sizeof(char) * letters);

	r = read(F_D, Buffer, letters);
	w = write(STDOUT_FILENO, Buffer, r);

	free(Buffer);
	close(F_D);
	return (w);
}
