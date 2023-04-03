#include "monty.h"

/**
 * push - pushes a node to the top of the stack
 * @line_number: The executing line of the monty file
 * @stack: The head node of our stack
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *num;
	stack_t *pushed_node;

	num = strtok(NULL, DELIMS);

	if (num == NULL || _isdigit(num) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	pushed_node = malloc(sizeof(stack_t));
	if (pushed_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	pushed_node->n = atoi(num);
	pushed_node->prev = NULL;
	pushed_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = pushed_node;

	*stack = pushed_node;
}
