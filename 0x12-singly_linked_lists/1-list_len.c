#include "lists.h"

/**
 * list_len - count length of a list
 * @h: pointer to a link list
 *
 * Return: size_t, length
 */
size_t list_len(const list_t *h)
{
	size_t list_length = 0;

	while (h)

		list_length++;
		h = h->next;

	return (list_length);
}
