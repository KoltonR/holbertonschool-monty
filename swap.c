#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: The head of the stack
 * @line_number: The line number of the monty file
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int hold_head;
	int hold_next;

	if (*stack == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	hold_head = head->n;
	hold_next = head->next->n;
	head->n = hold_next;
	head->next->n = hold_head;

}
