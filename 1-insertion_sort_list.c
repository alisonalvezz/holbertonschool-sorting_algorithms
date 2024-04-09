#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * @list: pointer to the head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *next_node;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	temp = NULL;
	next_node = NULL;

	while (current != NULL)
	{
		temp = current->prev;
		next_node = current->next;
		while (temp != NULL && temp->n > current->n)
			{
				temp = temp->prev;
			}
		if (temp == NULL)
		{
			current->prev->next = next_node;
			if (next_node != NULL)
				next_node->prev = current->prev;
			current->prev = NULL;
			current->next = *list;
			(*list)->prev = current;
			*list = current;
		}
		else
		{
			current->prev->next = next_node;
			if (next_node != NULL)
				next_node->prev = current->prev;
			current->prev = temp;
			current->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = current;
			temp->next = current;
		}
		print_list(*list);
		current = next_node;
	}
	print_list(*list);
}
