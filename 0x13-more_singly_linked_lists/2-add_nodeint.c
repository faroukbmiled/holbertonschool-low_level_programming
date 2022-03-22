#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of a list
 * @head: pointer to head's pointer
 * @n: data for each node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = *head;
*head = node;
return (node);
}
