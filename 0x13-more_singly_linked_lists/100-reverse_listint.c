#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *reverse_listint - function to reverse order of nodes
 * @head:  pointer to head
 *
 * Return: always successful
 */

listint_t* reverse_listint(listint_t** head) 
{
    listint_t* head = NULL;

    listint_t* next = NULL;

    if (head == NULL || *head == NULL)
    {
        return NULL;
    }

    if ((*head)->next == NULL)

    {
        return (*head);
    }

    listint_t* p = (*head);
    *q = p->next;

    *r = q->next;

    while (r != NULL)
    {
        q->next = p;
        p = q;
        q = r;
        r = r->next;
    }

    (*head)->next = NULL;
    return q;
}