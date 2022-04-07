#include "main.h"
/**
 * append_text_to_file - append a text
 * @filename: filename
 * @text_content: content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fd, numletters, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	rwr = write(fd, text_content, numletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
