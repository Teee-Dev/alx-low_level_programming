#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the pointer of the first element in the linked list.
 *
 * Return: The data inside the element that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;  /* Temporary pointer for saving the next node */
int data;         /* Variable to store the data of the deleted node */
if (!head || !*head)
return (0);
data = (*head)->n;  /* Save the data of the head node */
temp = (*head)->next;  /* Save the next node */
free(*head);  /* Free the head node */
*head = temp;  /* Update the head to the next node */
return (data);  /* Return the data of the deleted node */
}
