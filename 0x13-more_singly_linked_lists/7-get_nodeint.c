#include "lists.h"
<<<<<<< HEAD



/**

 * get_nodeint_at_index - return the nth node of a listint_t linked list.

 * @head: data type pointer the head/next node

 * @index: data type unsigned int index

 * Return: head node data n

 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

=======
/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list.
 * @head: data type pointer the head/next node
 * @index: data type unsigned int index
 * Return: head node data n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
	listint_t *tmp_node = head;

	unsigned int counter = 0;

<<<<<<< HEAD


	for (; tmp_node && counter < index; counter++)

	{

		tmp_node = tmp_node->next;

	}

	return (tmp_node);

=======
	for (; tmp_node && counter < index; counter++)
	{
		tmp_node = tmp_node->next;

	}
	return (tmp_node);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
