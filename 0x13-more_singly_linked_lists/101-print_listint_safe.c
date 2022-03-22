#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: int
 * Return: number of node.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i, m;
i = 0;
while (head != NULL)
{
m = head - head->next;
i++;
printf("[%p] %d\n", (void *)head, head->n);
if (m > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (i);
}
