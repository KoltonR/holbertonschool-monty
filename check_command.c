#include "monty.h"

/**
 * check_command - checks the parsed commands against function pointers
 * @op: operation to perofrm
 * @line_num: line number
 * @stack: it's the stack
 *
 */

void check_command(stack_t **stack, char *op, unsigned int line_num)
{
int i;
instruction_t ops[] = {
{"pall", pall},
{"push", push},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{"sub", sub},
{"mul", mul},
{"div", _div},
{"mod", mod},
{"pchar", pchar},
{NULL, NULL}
};

for (i = 0; ops[i].opcode; i++)
if (strcmp(op, ops[i].opcode) == 0)
{
ops[i].f(stack, line_num);
return;
}
if (op[0] != '#')
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, op);
early_free(stack);
exit(EXIT_FAILURE);
}
}
