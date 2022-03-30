#ifndef _LISTS_
#define _LISTS_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * file: lists.h
 * description: Contain all prototypes
 * @list_t
 */

int _putchar(char c);
size_t print_list(const list_t *h);

#endif