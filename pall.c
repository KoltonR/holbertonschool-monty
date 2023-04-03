#include "monty.h"

/**
 * pall - prints all
 * @line_number: it's the line number
 * @stack: it's the stack
 *
 */


void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
