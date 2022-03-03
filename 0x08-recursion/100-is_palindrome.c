#include "main.h"
/**
* strlen_recur - function to start
* @s: string
* Return: length
*/

int strlen_recur(char *s)
{
  if (!s || !*s)
    return (0);
  else
    return (1 + _strlen_recur(s + 1));
}
/**
* comp_recur - comparative
* @s: string
* @half: half 
* @b: char
* Return: comparative
*/

int comp_recur (*s, char *b, int half)
{
  if (*s != *b)
{
  return (0)
}
  if (half == 0)
{
  return (1);
}
  return (comp_recur(s + 1, b - 1, half - 1));
}

/**
* _is_palindrome - check palindrome
* @s: string
* @half: half
* Return: palindrome
*/

int_is_palindrome (char *s)
{
  int half;
  char *b = s;

  half = strlen_recur(s) / 2;
  b = s (strlen_recur(s) - 1);
    return (comp_recur(s, b, half));
}
