#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: is the elements of he list
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
    size_t I;

    for (i = 0; h != NULL; i++)
    {
        if (h->str != NULL)
        {
            printf("[%d] %s\n", h->len, h->str);
            h = h->next;
        }
        else
        {
            printf("[%d] %s\n", 0, "(nil)");
            h = h->next;
        }
    }
    return (i);
}
