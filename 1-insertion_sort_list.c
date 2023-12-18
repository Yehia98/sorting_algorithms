#include "sort.h"

/**
 * replace - replaces 2 nodes in a doubly linked list.
 * @first_node: a pointer to the first node.
 * @second_node: a pointer to the second node.
 * Return: void.
 */
void replace(listint_t *first_node, listint_t *second_node)
{
	if (first_node->prev)
		first_node->prev->next = second_node;
	if (second_node->next)
		second_node->next->prev = first_node;
	first_node->next = second_node->next;
	second_node->prev = first_node->prev;
	first_node->prev = second_node;
	second_node->next = first_node;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: a pointer to the head of a node.
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *x;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		x = i;
		i = i->next;
		while (x && x->prev)
		{
			if (x->prev->n > x->n)
			{
				replace(x->prev, x);
				if (!x->prev)
					*list = x;
				print_list((const listint_t *)*list);
			}
			else
				x = x->prev;
		}
	}
}
