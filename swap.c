#include "main.h"

/**
 * swap - swaps the top two elements of the stack
 * @head: head / top of the stack
 * @line_num: line number at which swap was called
 */
void swap(stack_t **head, int line_num)
{
	stack_t *curr_top = *head;
	int i = 0;

	while (curr_top && curr_top->next)
	{
		i++;
		curr_top = curr_top->next;
	}
	printf("There are %d nodes in this dll\n", i);
	if (i < 2)
		swap_error(line_num);
	else
	{
		int first_data, second_data;

		/*collecting the data in the 2 nodes to be swapped*/
		curr_top = *head;
		first_data = curr_top->n;
		second_data = curr_top->next->n;

		/**
		 * changing the head position to the element
		 * before the fist two to be swapped
		 */
		*head = (*head)->next->next;
		push(head, first_data);
		push(head, second_data);
	}
}
