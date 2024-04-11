#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Double linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		previous = current->prev;
		while (previous != NULL && previous->n > current->n)
		{
			previous->next = current->next;
			if (current->next != NULL)
				current->next->prev = previous;

			current->prev = previous->prev;
			if (previous->prev != NULL)
				previous->prev->next = current;
			else
				*list = current;

			current->next = previous;
			previous->prev = current;

			previous = current->prev;

			print_list(*list);
		}
		current = current->next;
	}
}

