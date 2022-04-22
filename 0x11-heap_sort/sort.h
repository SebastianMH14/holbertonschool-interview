#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void swap(int *a, int *b);
void heapify(int arr[], int n, int i);

#endif /*SORT_H*/
