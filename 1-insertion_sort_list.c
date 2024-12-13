#include "sort.h"
#include <stdio.h>

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
