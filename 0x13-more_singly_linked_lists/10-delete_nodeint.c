#include <stdlib.h>
<<<<<<< HEAD

#include <stdio.h>

#include "lists.h"



/**

  * delete_nodeint_at_index - ...

  * @head: ...

  * @index: ...

  *

  * Return: ...

  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

=======
#include <stdio.h>
#include "lists.h"
/**
  * delete_nodeint_at_index - Delete a node at a given positiion.
  * @head: First node address.
  * @index: Position of the node to delete
  *
  * Return: If success (1).
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
	unsigned int count = 1;

	listint_t *new = *head, *temp;

<<<<<<< HEAD


	if (!head || !*head)

		return (-1);



	if (index == 0)

	{

		*head = new->next;

		free(new);

		return (1);

	}



	temp = *head;

	while (temp)

	{

		if (count == index)

		{

=======
	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = new->next;

		free(new);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (count == index)
		{
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
			new = temp->next;

			temp->next = new->next;

			free(new);
<<<<<<< HEAD

			return (1);

		}



		temp = temp->next;

		count++;

	}



	return (-1);

=======
			return (1);
		}
		temp = temp->next;

		count++;
	}
	return (-1);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
