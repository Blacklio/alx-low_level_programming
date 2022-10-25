#include <stdlib.h>
#include "lists.h"
/**
 * *reverse_listint - function to reverse order of nodes
 * @head:  pointer to head
 *
 * Return: always successful
 */

struct Node {
    int data;
    struct Node* next;
};

// newNode function inserts the new node at
// the right side of linked list
struct Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}

// reverse() will receive individual data item
// from reverseIndividualData() and will return
// the reversed number to calling function
int reverse(int number)
{
    int new_num = 0, rem;

    while (number != 0) {
        rem = number % 10;
        new_num = new_num * 10 + rem;
        number = number / 10;
    }

    return new_num;
}

void reverseIndividualData(struct Node* node)
{

    if (node == NULL)
        return;

    while (node != NULL) {

        /*  function call to reverse(),
            reverseIndividualData(struct Node *node)
            will send the one data item at a time to
            reverse(node->data) function which will
            return updated value to node->data*/

        node->data = reverse(node->data);

        /*  updating node pointer so as to get
            next value */

        node = node->next;
    }
}

// Function to print nodes in linked list
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d", node->data);
        node = node->next;
    }
}
