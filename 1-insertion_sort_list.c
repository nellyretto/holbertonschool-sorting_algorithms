#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorting a double linked list on ascending
 * @list: Pointer to a pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)

{
	listint_t *current;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->prev;

		while (temp != NULL && temp->n > current->n)
		{
			if (temp->prev != NULL)
				temp->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = temp;

			temp->next = current->next;
			current->prev = temp->prev;
			current->next = temp;
			temp->prev = current;

			temp = current->prev;
		}

		print_list(*list);

		current = current->next;
	}
}

