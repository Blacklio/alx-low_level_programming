#include <stdlib.h>
<<<<<<< HEAD

#include "lists.h"



/**

  * pop_listint - ...

  * @head: ...

  *

  * Return: ...

  */

int pop_listint(listint_t **head)

{

=======
#include "lists.h"
/**
  * pop_listint - Delete the first element of a singly linked list.
  * @head: Pointer to a list.
  *
  * Return: Integer if success.
  */

int pop_listint(listint_t **head)
{
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
	listint_t *new_head;

	int n = 0;

<<<<<<< HEAD


	if (*head != NULL)

	{

=======
	if (*head != NULL)
	{
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
		new_head = (*head)->next;

		n = (*head)->n;

		free(*head);
<<<<<<< HEAD

		*head = new_head;

	}



	return (n);

=======
		*head = new_head;
	}
	return (n);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
