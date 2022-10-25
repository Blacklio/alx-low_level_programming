#include "lists.h"
<<<<<<< HEAD



/**

 * insert_nodeint_at_index - insert a node in a given position.

 * @head: data type pointer the head/next node

 * @idx: data type unsigned int index

 * @n: data type int

 * Return: new_node

 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{

	listint_t *tmp_node, *new_node;

	unsigned int counter = 0;



	if (head == NULL && *head == NULL)

		return (NULL);



	tmp_node = *head;

	if (idx == 0)

	{

		new_node = malloc(sizeof(listint_t));



		if (new_node == 0)

			return (NULL);

=======
/**
 * insert_nodeint_at_index - insert a node in a given position.
 * @head: data type pointer the head/next node
 * @idx: data type unsigned int index
 * @n: data type int
 * Return: new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node, *new_node;
	unsigned int counter = 0;

	if (head == NULL && *head == NULL)
		return (NULL);
	tmp_node = *head;
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == 0)
			return (NULL);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
		new_node->n = n;

		new_node->next = tmp_node;

		*head = new_node;
<<<<<<< HEAD

		return (new_node);

	}

	while (tmp_node)

	{

		if (counter + 1 == idx)

		{

			new_node = malloc(sizeof(listint_t));



			if (new_node == 0)

				return (NULL);

=======
		return (new_node);
	}
	while (tmp_node)
	{
		if (counter + 1 == idx)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == 0)
				return (NULL);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
			new_node->n = n;

			new_node->next = tmp_node->next;

			tmp_node->next = new_node;

			return (new_node);
<<<<<<< HEAD

		}

		tmp_node = tmp_node->next;

		counter++;

	}

	return (NULL);

=======
		}
		tmp_node = tmp_node->next;

		counter++;
	}
	return (NULL);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
