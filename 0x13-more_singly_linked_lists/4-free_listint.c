#include <stdlib.h>
<<<<<<< HEAD

#include "lists.h"



/**

  * free_listint - Frees a linked list

  * @head: The head of the linked list

  *

  * Return: Nothing

  */

void free_listint(listint_t *head)

{

	listint_t *temp;



	while (head)

	{

		temp = head;

		head = head->next;

		free(temp);

	}



	free(head);

=======
#include "lists.h"
/**
  * free_listint - Frees a linked list
  * head: The head of the linked list
  *
  * Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
	free(head);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
