#include "lists.h"

/**
 * find_listint_loop -program finds the loop in a linked list
 * @head: linked list to search in
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *cook = head;
listint_t *eat = head;

if (!head)
return (NULL);

while (cook && eat && eat->next)
{
eat = eat->next->next;
cook = cook->next;
if (eat == cook)
{
cook = head;
while (cook != eat)
{
cook = cook->next;
eat = eat->next;
}
return (eat);
}
}

return (NULL);
}
