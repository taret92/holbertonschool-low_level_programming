#ifndef __search_algos_H__
#define __search_algos_H__

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
