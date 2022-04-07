#include "main.h"
/**
 * main-main_function copies the content to another file
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int wr, from, to, rd;
	int c = 0, c1 = 0;
	char buff[1024];

	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
		if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rd = read(from, buff, 1024);
	while (rd > 0)
	{
	wr = write(to, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	rd = read(from, buff, 1024);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	}
	c = close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c), exit(100);
	}
	c1 = close(to);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1), exit(100);
	}
		return (0);
}
