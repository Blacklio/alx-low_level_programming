#include "lists.h"
<<<<<<< HEAD



/**

 * free_listint2 - Free listint_t.

 * @head: data type pointer the head/next node

 * Return: 0 elements all free

 */

void free_listint2(listint_t **head)

{

	if (head == NULL)

		return;

	while (*head)

	{

		free(*head);

		*head = (*head)->next;

	}

	head = NULL;

=======
/**
 * free_listint2 - Free listint_t.
 * @head: data type pointer the head/next node.
 *
 * Return: 0 elements all free.
 */

void free_listint2(listint_t** head)
{
	listint_t* temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;

		free(*head);
		*head = temp;
	}
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
