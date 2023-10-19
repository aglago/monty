#include "main.h"

/**
 * pall - prints all elements in stack
 * @head: head / top of the stack
 */
void pall(stack_t *head)
{
	if (head == NULL)
		return;

	stack_t *curr_top = head;

	while (curr_top)
	{
		printf("%d\n", curr_top->n);
		curr_top = curr_top->next;
	}
}
