#include "sort.h"
/**
 * insertion_sort_list - sorts a list
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *nexty;

	if (!list || !*list)
		return;
	nexty = (*list)->next;
	while (nexty)
	{
		while (nexty->prev && nexty->prev->n > nexty->n)
		{
			nexty->prev->next = nexty->next;
			if (nexty->next)
			{
				nexty->next->prev = nexty->prev;
				/*nexty->prev->next = nexty->next;*/
			}
			nexty->next = nexty->prev;
			nexty->prev = nexty->prev->prev;
			nexty->next->prev = nexty;
			if (nexty->prev)
				nexty->prev->next = nexty;
			else
				*list = nexty;
			print_list(*list);
		}
		nexty = nexty->next;
	}
}
