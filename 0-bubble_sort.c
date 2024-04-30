#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *                   using the Bubble sort algorithm
 * @array: the array we went to sort
 * @size: the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, sort_chake;
	int copy_j;
	size_t l = size - 1;

	for (i = 0; i < size - 1; i++)
	{
		sort_chake = 0;
		for (j = 0; j < l; j++)
		{
			if (array[j] > array[j + 1])
			{
				copy_j = array[j];
				array[j] = array[j + 1];
				array[j + 1] = copy_j;
				print_array(array, size);
				sort_chake++;
			}
		}
		if (sort_chake == 0)
			return;
		l -= 1;
	}
}
