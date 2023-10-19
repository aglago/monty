#include "main.h"

/**
 * add - adds first two elements on stack
 * @head: head of the dll
 * @line_num: the line number of the error instruction
 */
void add(stack_t **head, int line_num)
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
		int first_data, second_data, sum;

		/*collecting the data in the 2 nodes to be swapped*/
		curr_top = *head;
		first_data = curr_top->n;
		second_data = curr_top->next->n;
		sum = first_data + second_data;

		/**
		 * changing the head position to the element
		 * before the fist two to be swapped
		 */
		*head = (*head)->next->next;
		push(head, sum);
	}
}
