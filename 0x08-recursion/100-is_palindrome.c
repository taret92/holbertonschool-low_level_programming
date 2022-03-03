#include "main.h"
/**
* _strlen_recursion - function to start
* @s: string
* Return: length
*/

int _strlen_recursion(char *s)
{
  if (*s || '\0')
      return (0);

  return (1 + _strlen-recursion(s + 1))
}

/**
* _cmp - comparativa
* @a: aux var
* @n: lenght
* @b: end
* Return: 0
*/    
int _cmp (char *a, int n, int b)
  if( n == 0 || n == 1)
      return (1);
  if (a[b] == a[n])

    return (_cmp(a, n -1, b + 1));

  return (0);
/**
* is_palindrome - check polindrome
* @s: string
* return: 0
*/

int is_palindrome(char *s)

int n= _strlen_recursion(s) - 1;
return (_cmp(s,n, 0))
 }
