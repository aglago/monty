#include "main.h"

/**
 * push - pushed an element to a stack
 * @head: head / top of stack
 * @data: data to push to stack
 */
void push(stack_t **head, int data)
{
	stack_t *node = malloc(sizeof(stack_t));

	if (node == NULL)
		malloc_error(); /* stack full */
	else
	{
		node->n = data;

		if ((*head) == NULL)
		{
			(*head) = node;
			node->next = NULL;
			node->prev = NULL;
		}
		else
		{
			node->next = *head;
			node->prev = NULL;
			(*head)->prev = node;
			(*head) = node;
		}
	}
}
