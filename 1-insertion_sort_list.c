#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list-Sorts adoubly linked list of integers in ascending order
 * @list: Pointer to the head of the doubly linked list
 *
 * DescriptionThis function sorts a doubly linked list using the insertion sort
 * algorithm. It compares the nodes in the list and moves them into their
 * correct positions in the sorted part of the list. After each swap, the
 * list is printed.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		insert = current;
		current = current->next;

		while (insert->prev && insert->n < insert->prev->n)
		{
			temp = insert->prev;
			if (temp->prev)
				temp->prev->next = insert;

			insert->prev = temp->prev;
			temp->next = insert->next;
			if (insert->next)
				insert->next->prev = temp;

			insert->next = temp;
			temp->prev = insert;

			if (!insert->prev)
				*list = insert;

			print_list(*list);
		}
	}
}
