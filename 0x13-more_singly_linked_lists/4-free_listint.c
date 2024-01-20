#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
listint_t *temp;  /* Temporary pointer for traversing the list */
while (head)
{
temp = head->next;  /* Save the next node before freeing the current one */
free(head);         /* Free the current node */
head = temp;        /* Move to the next node */
}
}

