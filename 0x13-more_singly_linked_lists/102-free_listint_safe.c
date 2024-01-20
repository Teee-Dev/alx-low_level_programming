#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely to avoid loops.
 * @h: Pointer to the pointer of the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;  /* Variable to store the number of elements */
int diff;        /* Difference between current and next node addresses */
listint_t *temp;  /* Temporary pointer for traversing the list */
if (!h || !*h)
return (0);  /* Return 0 if the list is empty */
while (*h)
{
diff = (int)(*h - (*h)->next);  /* Calculate the difference in addresses */
if (diff > 0)
{
temp = (*h)->next;  /* Save the next node before freeing the current one */
free(*h);           /* Free the current node */
*h = temp;          /* Move to the next node */
len++;              /* Increment the element count */
}
else
{
free(*h);   /* Free the current node */
*h = NULL;  /* Set the pointer to NULL to break out of the loop */
len++;      /* Increment the element count */
break;
}
}
*h = NULL;  /* Set the head pointer to NULL after freeing all nodes */
return (len);  /* Return the number of elements in the freed list */
}
