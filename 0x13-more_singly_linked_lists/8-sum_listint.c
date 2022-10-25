#include <stdlib.h>
<<<<<<< HEAD

#include "lists.h"



/**

  * sum_listint - ...

  * @head: ...

  *

  * Return: ...

  */

int sum_listint(listint_t *head)

{

	int amount = 0;



	if (head)

	{

		while (head)

		{

=======
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
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
			amount += head->n;

			head = head->next;

		}
<<<<<<< HEAD

	}



	return (amount);

=======
	}
	return (amount);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
