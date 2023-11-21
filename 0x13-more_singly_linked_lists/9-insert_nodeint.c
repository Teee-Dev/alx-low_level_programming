#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list at a given position.
 * @head: Pointer to the pointer of the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if unsuccessful.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;          /* Variable for counting nodes */
listint_t *new_node;     /* Pointer to the new node */
listint_t *temp = *head;  /* Temporary pointer for traversing the list */
new_node = malloc(sizeof(listint_t));  /* Allocate memory for the new node */
if (!new_node || !head)
return (NULL);
new_node->n = n;       /* Set the data of the new node */
new_node->next = NULL;  /* Initialize the next pointer of the new node */
if (idx == 0)
{
new_node->next = *head;  /* Insert at the beginning of the list */
*head = new_node;
return (new_node);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new_node->next = temp->next;  /* Connect the new node to the next node */
temp->next = new_node;        /* Insert the new node in the list */
return (new_node);
}
else
temp = temp->next;  /* Move to the next node */
}
return (NULL);  /* Return NULL if insertion is not possible */
}
