#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the Selection sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	/* O(n^2) worst case */
	/* O(n^2) average case */
	/* O(n^2) best case */

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			temp = array[i];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
