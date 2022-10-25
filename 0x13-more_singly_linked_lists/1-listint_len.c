#include "lists.h"
<<<<<<< HEAD



/**

 * listint_len - Return the number of elements

 * @h: data type pointer of struct

 * Return: elements of the str i

 */

size_t listint_len(const listint_t *h)

{

	unsigned int i = 0;

	const listint_t	 *new_node = h;



	for (; new_node; new_node = new_node->next)

		i++;

		return (i);

=======
/**
 * listint_len - Return the number of elements.
 * @h: data type pointer of struct.
 *
 * Return: elements of the str i.
 */

size_t listint_len(const listint_t* h)
{
	const listint_t* tp;

	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;

	}
	return (cnr);
>>>>>>> 508a638612b6975cac7099369f6c8a3ff42b7f8f
}
