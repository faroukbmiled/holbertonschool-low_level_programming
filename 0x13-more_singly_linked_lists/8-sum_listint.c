#include "lists.h"
/**
 * sum_listint - returns the sum of all data
 * @head: pointer to head node
 * Return: sum or 0 
 */
int sum_listint(listint_t *head)
{
unsigned int s;
s = 0;
while (head)
{
s += head->n;
head = head->next;
}
return (s);
}
