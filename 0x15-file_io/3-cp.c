#include "main.h"

char *create_buffer(char *file);
void close_file(int F_D);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *Buffer;

	Buffer = malloc(sizeof(char) * 1024);

	if (Buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (Buffer);
}


/**
 * close_file - closes the file descriptors
 * @F_D: file descriptor
 */
void close_file(int F_D)
{
	int a;

	a = close(F_D);

	if (a == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", F_D);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *Buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	Buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, Buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(Buffer);
			exit(98);
		}

		w = write(to, Buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(Buffer);
			exit(99);
		}

		r = read(from, Buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(Buffer);
	close_file(from);
	close_file(to);

	return (0);
}
