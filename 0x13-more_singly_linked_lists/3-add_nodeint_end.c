#include "lists.h"
<<<<<<< HEAD



/**

 * add_nodeint_end - Adds a node at the begining of a listint_t.

 * @n: data type pointer of struct

 * @head: data type pointer of pointer the head/next node

 * Return: elements of the str new_node

 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

	listint_t *new_node, *tmp_node;



	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)

		return (NULL);



	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)

	{

		*head = new_node;

	}

	else

	{

		tmp_node = *head;

		while (tmp_node->next != NULL)

=======
/**
 * add_nodeint_end - Adds a node at the begining of a listint_t.
 * @n: data type pointer of struct.
 * @head: data type pointer of pointer the head/next node.
 * Return: elements of the str new_node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp_node = *head;

		while (tmp_node->next != NULL)
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
			tmp_node = tmp_node->next;

		tmp_node->next = new_node;

	}
<<<<<<< HEAD

	return (new_node);

=======
	return (new_node);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
