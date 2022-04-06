#include "main.h"
/**
 * read_textfile - read a text and print the letters
 * @filename: file name
 * @letters: number of letters
 * Return: wr
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr != rd || !rd)

		return (0);

	close(fd);

	free(buf);

	return (wr);
}
