#include "monty.h"

/**
 * pint -prints the value at the top of the stack, followed by a new line.
 * @stack: it's the stack
 * @line_number: it's the line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
