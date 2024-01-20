#include "lists.h"

/**
 * get_nodeint_at_index - Return node at specified index in linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the desired node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;  /* Variable for counting the nodes */
listint_t *temp = head;  /* Temporary pointer for traversing the list */
while (temp && i < index)
{
temp = temp->next;  /* Move to the next node */
i++;  /* Increment the node count */
}
return (temp ? temp : NULL);  /* Return the node if found, otherwise NULL */
}
