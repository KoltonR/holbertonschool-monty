#include "monty.h"

/**
 * early_free - Frees the things used before the error
 * @head: The head node of the stack
 * Return: void
 */

void early_free(stack_t **head)
{
stack_t *this_node = *head;
stack_t *free_node;

if (efs.line)
free(efs.line);
if (efs.fp)
fclose(efs.fp);

while (this_node)
{
free_node = this_node;
this_node = this_node->next;
free(free_node);
}
*head = NULL;
