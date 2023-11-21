#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all the data.
 */
int sum_listint(listint_t *head)
{
int total_sum = 0;  /* Variable to store the sum */
listint_t *temp = head;  /* Temporary pointer for traversing the list */
while (temp)
{
total_sum += temp->n;  /* Add the data of the current node to the sum */
temp = temp->next;     /* Move to the next node */
}
return (total_sum);  /* Return the resulting sum */
}
