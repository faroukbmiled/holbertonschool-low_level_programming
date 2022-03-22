#include "lists.h"
/**
 * free_listint - frees list
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *h;
while (head != NULL)
{
h = head->next;
free(head);
head = h;
}
}
