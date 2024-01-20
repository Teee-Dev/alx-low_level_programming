#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to the pointer of the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;  /* Temporary pointer for traversing the list */
if (head == NULL || *head == NULL)
return;
while (*head)
{
temp = (*head)->next;  /* Save the next node before freeing the current one */
free(*head);           /* Free the current node */
*head = temp;          /* Move to the next node */
}
*head = NULL;  /* Set the head pointer to NULL after freeing all nodes */
}
