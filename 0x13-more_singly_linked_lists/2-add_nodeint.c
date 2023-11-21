#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @n: Data to be inserted into the new node.
 *
 * Return: Pointer to the newly created node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;  /* Pointer to the new node */
new_node = malloc(sizeof(listint_t));  /* Allocate memory for the new node */
if (!new_node)
return (NULL);
new_node->n = n;       /* Set the data of the new node */
new_node->next = *head;  /* Point the new node to the current head */
*head = new_node;      /* Update the head to the new node */
return (new_node);     /* Return the pointer to the new node */
}
