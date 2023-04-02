#include "monty.h"

/**
 * mul - Multiplies next element with the top of the stack, replacing head
 * @stack: The head of the stack
 * @line_number: The line number of the monty file
 * Return: void
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *oldhead = NULL;

	if (*stack == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	head->next->n = (head->n * head->next->n);

	oldhead = head;
	*stack = head->next;

	free(oldhead);
}
