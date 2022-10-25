#include <stdlib.h>
#include "lists.h"
/**
  * sum_listint - Sums up all of the data (n) in a list.
  * @head: Address of the first node of the list.
  *
  * Return: Integer if success.
  */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;

			head = head->next;

		}
	}
	return (amount);
}
