#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, aux;

	if(array == NULL)
		return;
	for(i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
