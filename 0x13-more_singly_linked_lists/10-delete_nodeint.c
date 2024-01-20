#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node
 * @head: Pointer to the pointer of the first element in the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;  /* Temporary pointer for traversing the list */
listint_t *current = NULL;  /* Pointer to the node to be deleted */
unsigned int i = 0;  /* Variable for counting nodes */
if (*head == NULL)
return (-1);  /* Return -1 if the list is empty */
if (index == 0)
{
*head = (*head)->next;  /* Update the head to skip the first node */
free(temp);  /* Free the first node */
return (1);  /* Return 1 for success */
}
while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);  /* Return -1 if index is out of bounds */
temp = temp->next;  /* Move to the next node */
i++;  /* Increment the node count */
}
current = temp->next;  /* Node to be deleted */
temp->next = current->next;  /* Connect the previous node to the next node */
free(current);  /* Free the node to be deleted */
return (1);  /* Return 1 for success */
}
