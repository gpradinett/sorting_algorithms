#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 *
 * @list: is the double linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int i;

	if (list == NULL)
		return;

	tmp = *list;

	while (tmp->next != NULL)
	{

		if (tmp->n > tmp->next->n)
		{
			i = tmp->n;
			*(int *)&tmp->n = tmp->next->n;
			*(int *)&tmp->next->n = i;
			print_list(*list);

			while (tmp->prev != NULL)
			{
				if (tmp->prev->n > tmp->n)
				{
					i = tmp->prev->n;
					*(int *)&tmp->prev->n = tmp->n;
					*(int *)&tmp->n = i;
					print_list(*list);
				}

				else
					break;

				tmp = tmp->prev;
			}
		}
		tmp = tmp->next;
	}
}
