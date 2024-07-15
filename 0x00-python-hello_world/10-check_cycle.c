#include "lists.h"

/**
 * check_cycle - a fun that will verify the cycle of the linkedlist
 *
 * @list: linked list
 *
 * Return: 1 if it is cyled linkedlist, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t  *doubl, *singl;

	if (!list || !list->next)
		return (0);

	doubl = list;
	singl = list;

	while (singl != NULL && doubl != NULL && doubl->next != NULL)
	{
		singl = singl->next;
		doubl = doubl->next->next;

		if (singl == doubl)
			return (1);

	}

	return (0);
}
