#include "monty.h"

/**
 * isonlyspaces - Checks if a string contains only spaces
 * @str: The string to check
 * Return: 1 if the string is only spaces, 0 otherwise
 */

int isonlyspaces(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] != 32)
return (0);
i++;
}
return (1);
}
