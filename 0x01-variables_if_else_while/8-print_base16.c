#include <stdio.h>

/**
 * main - print alphabet with putchar
 * Return: (0)
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)

	putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)

	putchar(digit);

	putchar('\n');

	return (0);
}
