#include <stdio.h>

/**
 * main - print alphabet with putchar
 * Return: (0)
 */

int main(void)

{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
