#include "monty.h"

/**
 * sub - Subtracts an element to the top of the stack, replacing head
 * @stack: The head of the stack
 * @line_number: The line number of the monty file
 * Return: void
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *oldhead = NULL;

	if (*stack == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	head->next->n = (head->next->n - head->n);

	oldhead = head;
	*stack = head->next;

	free(oldhead);
}
