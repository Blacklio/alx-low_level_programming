#include <stdlib.h>
#include "lists.h"
/**
 * *reverse_listint - function to reverse order of nodes
 * @head:  pointer to head
 *
 * Return: always successful
 */

struct listint_s 
{
	int n;
	struct listint_s* next;
}
typedef struct listint_s listint_t;

/* Function to reverse the linkedlist */

void reverse(listint_t** head)