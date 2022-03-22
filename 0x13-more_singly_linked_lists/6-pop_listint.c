#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to pointer of head
 * Return: head
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int i;
if (!head || !*head)
return (0);
new = *head;
i = new->n;
*head = new->next;
free(new);
return (i);
}
