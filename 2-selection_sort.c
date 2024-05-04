#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *		using the Selection sort algorithm
 * @array: the given list we went to sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	int copyValue_index;
	size_t index, i, min_index;

	for (index = 0; index < size; index++)
	{
		min_index = index;
		for (i = index + 1; i < size; i++)
		{
			if (array[i] < array[min_index])
				min_index = i;
		}
		copyValue_index = array[index];
		array[index] = array[min_index];
		array[min_index] = copyValue_index;
		if (min_index != index)
			print_array(array, size);
	}

}
