#include "lists.h"
#include <stdio.h>
/**
  * print_listint - prints all the elements of a list
  * @h: pointer to list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
size_t l;
l = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
l++;
}
return (l);
}
