#include "monty.h"

/**
 * pop - deletes top of the stack
 * @stack: it's the stack
 * @line_num: it's the line number
 *
 */


void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);

	}

	temp = *stack;
	*stack = (*stack)->next;

	free(temp);

}
