#include "lists.h"
/**
 * listint_len - Return the number of elements.
 * @h: data type pointer of struct.
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
}
