#include "monty.h"

/**
 * div - divs first two elements on stack
 * @head: head of the dll
 * @line_num: the line number of the error instruction
 */

void div(stack_t **head, unsigned int line_num)
{
	int divi;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_num);
                exit(EXIT_FAILURE);
	}

	divi = (*head)->next->n / (*head)->n;
	(*head)->next->n = divi;


	*head = (*head)->next;
	(*head)->prev = NULL;
	free_dll(head);
}
