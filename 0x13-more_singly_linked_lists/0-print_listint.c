#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Pointer to the head of the linked list (of type listint_t).
 *
 * Return: Number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;  /* Variable to store the number of nodes */
while (h)
{
printf("%d\n", h->n);  /* Print the data of the current node */
node_count++;          /* Increment the node count */
h = h->next;           /* Move to the next node */
}
return (node_count);  /* Return the total number of nodes */
}
