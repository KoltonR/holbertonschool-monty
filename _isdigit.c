#include "monty.h"

/**
 * _isdigit - Checks if a string contains only numbers
 * @token: The string to check
 * Return: 1 if is a number, 0 if not a number
 */

int _isdigit(char *token)
{
int i = 0;

if (token[0] == '-')
i++;

while (token[i])
{
if (token[i] < '0' || token[i] > '9')
return (0);
i++;
}
return (1);
}
