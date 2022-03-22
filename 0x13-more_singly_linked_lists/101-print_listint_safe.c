#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: int
 * Return: number of node.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
while (head)
{
i++;
printf("[%p] %d\n", (void *)head, head->n);
if (head - head->next > 0)
{
head = head->next;
}
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (i);
}
