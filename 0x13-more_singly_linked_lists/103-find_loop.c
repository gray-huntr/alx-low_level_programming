#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: Pointer to a list.
 * Return: The address of where the loop starts or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr, *slow_ptr;
	bool is_loop;

	if (head == NULL)
		return (NULL);

	fast_ptr = head;
	slow_ptr = head;
	is_loop = false;
	while (fast_ptr && slow_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
		if (slow_ptr == fast_ptr)
		{
			is_loop = true;
			break;
		}
	}
	if (is_loop)
	{
		fast_ptr = head->next;
		slow_ptr = head;
	}

	while (fast_ptr && fast_ptr < slow_ptr && is_loop)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (fast_ptr);
}

