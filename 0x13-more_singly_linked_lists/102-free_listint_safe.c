#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *safe_node = *h;
	listint_t *tmp_node;

	if (!h)
		return (0);
	while (safe_node != NULL)
	{
		counter++;
		tmp_node = safe_node;
		safe_node = safe_node->next;
		free(tmp_node);

		if (tmp_node < safe_node)
			break;
	}
	*h = NULL;
	return (counter);
}
