#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 *
 * Return: Pointer to the first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;  /* Pointer to the previous node */
listint_t *next = NULL;  /* Pointer to the next node */
while (*head)
{
next = (*head)->next;  /* Save the next node before reversing */
(*head)->next = prev;  /* Reverse the link to the previous node */
prev = *head;          /* Move to the next node */
*head = next;          /* Move to the next node in the original list */
}
*head = prev;  /* Set the head to the last node in the original list */
return (*head);  /* Return pointer to first node in reversed list */
}
