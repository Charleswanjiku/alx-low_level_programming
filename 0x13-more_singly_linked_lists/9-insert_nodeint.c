#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i = 0;
	listint_t *node, *node_temporal;

	if (!head && !*head)
		return (NULL);
	node_temporal = *head;
	if (idx == i)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (node_temporal)
		{
			if (idx == i + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = node_temporal->next;
				node_temporal->next = node;
				return (node);
			}
			node_temporal = node_temporal->next;
			i++;
		}
	}
	return (NULL);
}
