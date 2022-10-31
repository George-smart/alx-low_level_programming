#include "main.h"


/**
 * main - copy program
 * @argc: count paramenters
 * @argv: array to parameters
 * Return: 0 success or another value fail
 */
int main(int argc, char *argv[])
{
	int file_one, file_two, r, w, c;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	file_one = open(argv[1], O_RDONLY);
	if (file_one == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	file_two = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_two == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	for (r = 1024; r == 1024;)
	{
	r = read(file_one, buffer, 1024);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	w = write(file_two, buffer, r);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);
	}
	c = close(file_one);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_one),
			exit(100);

	c = close(file_two);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_two),
			exit(100);

	return (0);
}
