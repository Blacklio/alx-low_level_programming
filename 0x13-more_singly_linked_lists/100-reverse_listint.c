#include <stdlib.h>
<<<<<<< HEAD

#include "lists.h"



/**

 * reverse_listint -  reverses a listint_t linked list

 * @head: double pointer to head of the listint_t linked list

 * Return: a pointer to the first node of the reversed list

 */



listint_t* reverse_listint(listint_t** head)

{

	listint_t* prev = NULL, * next = NULL;



	if (head)

	{

		while (*head)

		{

			next = *head;

			*head = (*head)->next;

			next->next = prev;

			prev = next;

		}



		*head = prev;

		return (*head);

	}



	return (NULL);

=======
#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: double pointer to head of the listint_t linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t* reverse_listint(listint_t** head)
{
	listint_t* prev = NULL, * next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
>>>>>>> 1983238dd1e33edb800724eb0666eebfb5af78b9
}
