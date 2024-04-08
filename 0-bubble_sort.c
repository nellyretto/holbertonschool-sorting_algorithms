#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * the bubble sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	/* O(n^2) worst case (reverse sorted array) */
	/* O(n^2) average case */
	/* O(n) best case (already sorted array) */

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + i])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}

		if (swapped == 0)
			break;

	}
}
