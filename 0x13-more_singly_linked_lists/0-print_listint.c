<<<<<<< HEAD

#include "lists.h"



/**

 * print_listint - Print all the elements of a list_int list

 * @h: data type pointer of struct

 * Return: elements of the str i

 */

size_t print_listint(const listint_t *h)

{

	unsigned int i = 0;

	const listint_t	 *new_node = h;



	for (; new_node; new_node = new_node->next)

	{

		printf("%d\n", new_node->n);

		i++;

	}

	return (i);

=======
#include "lists.h"
/**
 * print_listint - Print all the elements of a list_int list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		i++;
	}
	return (i);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
