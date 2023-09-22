#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - returns number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t N;

	N = 0;
	while (h != NULL)
	{
		h = h->next;
		N++;
	}
	return (N);
}
