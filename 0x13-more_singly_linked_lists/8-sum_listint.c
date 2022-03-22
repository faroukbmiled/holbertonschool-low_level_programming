#include "lists.h"
/**
 * sum_listint - returns the sum of all data of a list
 * @head: pointer to head node
 * Return: sum of data or 0
 */
int sum_listint(listint_t *head)
{
unsigned int s = 0;
while (head)
{
s += head->n;
head = head->next;
}
return (s);
}
