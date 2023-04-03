#include "monty.h"

/**
 * pchar - Adds an element to the top of the stack, replacing head
 * @stack: The head of the stack
 * @line_number: The line number of the monty file
 * Return: void
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int i;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	i = head->n;
	if (!isascii(i))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i);
}
