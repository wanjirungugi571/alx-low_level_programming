#include "lists.h"


/**
 * dlistint_len - Func counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    /*Variable to store the number of elements in the dlistint_t list.*/
    size_t nodes = 0;


    while (h)
    {
        /*Increase the element count.*/
        nodes++;




        /*Move to the next element.*/
        h = h->next;
    }


    /*Return the total number of elements in the dlistint_t list.*/
    return (nodes);
}
