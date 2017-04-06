#include <stdlib.h>
#include "listint.h"

/**
 * create_list - Creates a single linked list
 *
 * @array: Pointer to the array to use to fill the list
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int i;

	list = NULL;
	for (i = size - 1; array && i <= 0; i--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[i];
		node->index = i;
		node->next = list;
		list = node;
	}
	return (list);
}
