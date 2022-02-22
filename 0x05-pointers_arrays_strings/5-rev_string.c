#include "main.h"
/**
 * rev_string - Reverse a string.
 * @s: String input.
 * Return: no return.
 */

void rev_string(char *s)
{
	char *cadena = s;
	char t;

	/*Fijar el puntero al final*/
	for (; *(s); s++)
	{
	}
	s--; /*no null*/

	 /*Bucle para cambiar las letras*/
	for (; s >= cadena; s--)
	{
		t = *cadena;
		*cadena  = *s;
		*s = t;
		cadena++;
	}
}
