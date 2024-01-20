#include "lists.h"

/**
 * add_nodeint_end - Inserts a node at the end of a linked list.
 * @head: Pointer to the pointer of the first element in the list.
 * @n: Data to be inserted into the new element.
 *
 * Return: Pointer to newly created node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;  /* Pointer to the new node */
listint_t *temp = *head;  /* Temporary pointer for traversal */
new_node = malloc(sizeof(listint_t));  /* Allocate memory for the new node */
if (!new_node)
return (NULL);
new_node->n = n;       /* Set the data of the new node */
new_node->next = NULL;  /* Initialize the next pointer of the new node */
if (*head == NULL)
{
*head = new_node;  /* If the list is empty, set the new node as the head */
return (new_node);
}
while (temp->next)
temp = temp->next;  /* Traverse to the last node in the list */
temp->next = new_node;  /* Connect the last node to the new node */
return (new_node);  /* Return the pointer to the new node */
}
