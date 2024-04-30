#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers in ascending
 *		 order using the Insertion sort algorithm
 * @list: a pointer to the head pointer of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *new;
	int step = 0, key, index_node;

	if (list == NULL && *list == NULL)
		return;
	temp = *list;
	while (temp->next)
	{
		step++;
		new = *list;
		for (index_node = 0; index_node < step; index_node++)
			new = new->next;
		while (new && new->prev)
		{
			if (new->n < new->prev->n)
			{
				key = new->n;
				new->n = new->prev->n;
				new->prev->n = key;
				print_list(*list);
				new = new->prev;
			}
			else
				new = NULL;
		}
		temp = temp->next;
	}
}
