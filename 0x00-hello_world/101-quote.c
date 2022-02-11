#include <unistd.h>
#include <stdio.h>
/**
 * main - print exactly and that piece of art is useful" -
 * Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 * Return: 1 error
 */
int main(void)
{
	write(1, "and that piece of art is useful\" ", 33);
	write(1, "- Dora Korpar, 2015-10-19\n", 26);

	return (1);
}
