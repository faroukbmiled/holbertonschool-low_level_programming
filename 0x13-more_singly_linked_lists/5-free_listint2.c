#include "lists.h"
/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to pointer of head
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *n;
if (head == NULL)
return;
while (*head != NULL)
{
n = (*head)->next;
free(*head);
*head = n;
}
*head = NULL;
}
