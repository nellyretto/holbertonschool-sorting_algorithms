#include <stdio.h>
#include "sort.h"

/**
 * swap_elements - swapping elements for the iterations
 *
 * @array: array to be worked with
 * @i: first variable
 * @j: second variable
 */

void swap_elements(int *array, ssize_t i, ssize_t j)

{
	if (i != j)
	{
		int temp = array[i];

		array[i] = array[j];
		array[j] = temp;
	}
}

/**
 * lomuto_partition - lomuto scheme utilization
 *
 * @array: array to be worked with
 * @low: first variable
 * @high: second variable
 * @size: unused variable
 * Return: position of the element
 */

int lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)

{
	(void)size;

	int pivot = array[high];
	ssize_t i = low - 1;
	ssize_t j;

	for (j = low; j <= high - 1; j++)

	{
		if (array[j] < pivot)
		{
			i++;
			swap_elements(array, i, j);
		}
	}
	swap_elements(array, i + 1, high);
	return (i + 1);
}

/**
 * quick_sort_recursive - recursion to work with the connecting funtions
 *
 * @array: array to be worked with
 * @size: number of elements
 * @low: first variable
 * @high: seocond variable
 */

void quick_sort_recursive(int *array, ssize_t low, ssize_t high, size_t size)

{
	if (low < high)
	{
		ssize_t pi = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, pi - 1, size);
		quick_sort_recursive(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorting array of intengers in an ascending way
 * @array: array to be worked with
 * @size: number of elements
 *
 * Return: the position of the element
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	print_array(array, size);
	quick_sort_recursive(array, 0, size - 1, size);
	print_array(array, size);
}

