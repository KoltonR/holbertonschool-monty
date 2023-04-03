#include "monty.h"


/**
 * monty_exit - exits the monty interpeter
 * @stack: the stack
 * return: Void
 */

void monty_exit(stack_t **stack)
{
early_free(stack);
exit(EXIT_SUCCESS);

}
