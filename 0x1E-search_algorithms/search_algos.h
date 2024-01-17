#ifndef SEARCH_ALOGS_H
#define SEARCH_ALOGS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
