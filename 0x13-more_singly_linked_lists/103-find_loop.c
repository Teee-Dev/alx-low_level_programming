#include "lists.h"

/**
 * find_listint_loop - Find starting node of a loop in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;  /* Move one node at a time */
listint_t *fast = head;  /* Move two nodes at a time */
if (!head)
return (NULL);  /* Return NULL if the list is empty */
while (slow && fast && fast->next)
{
fast = fast->next->next;  /* Move fast pointer two nodes ahead */
slow = slow->next;        /* Move slow pointer one node ahead */
if (fast == slow)
{
slow = head;  /* Reset slow pointer to the head */
while (slow != fast)
{
slow = slow->next;  /* Move slow pointer one node at a time */
fast = fast->next;  /* Move fast pointer one node at a time */
}
return (fast);  /* Return starting node of the loop */
}
}
return (NULL);  /* Return NULL if no loop is found */
}
