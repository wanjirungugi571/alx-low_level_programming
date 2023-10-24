#include "lists.h"

/**
 * pop_listint - program deletes the head node of a linked list
 * @head:the pointer to the first element in the linked list
 *
 * Return: the data in the deleted elements
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
