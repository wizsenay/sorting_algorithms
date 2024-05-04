#include <stdio.h>
#include "sort.h"

/**
 * parttion - used to separet an array in to two part
 * @lower_bound: the first element of the array
 * @upper_bound: the last element of the array
 * @array: the list of usorted data
 * Return: the index of the center element
 */

int partition(int *array, int lower_bound, int upper_bound)
{
	int pivot = array[upper_bound];
	int copy_i, i, j = lower_bound;

	for (i = lower_bound; i < upper_bound; i++)
	{
		if (pivot >= array[i])
		{
			j++;
			copy_i = array[i];
			array[i] = array[j];
			array[j] = copy_i;
			print_array(array, upper_bound + 1);
		}
	}
	copy_i = array[j + 1];
	array[j + 1] = array[upper_bound];
	array[upper_bound] = copy_i;
	return (j + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *		using the Quick sort algorithm
 * @array: the array we went to sort
 * @low: the lowe bund of the array
 * @high: the upper bund of the array
 */
void quick(int *array, int low, int high)
{
	int parti;
	if (low < high)
	{
		parti = partition(array, low, high);
		quick(array, low, parti-1);
		quick(array, parti+1, high);
	}
}
/**
 * quick_sort - run the program
 * * @array: the array we went to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	
	quick(array, 0, size - 1);
}
