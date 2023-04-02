#include "monty.h"

/**
 * monty_init - Checks and sets up the interpreter for handling the file
 * @file: file to open
 * @argc: argument count
 * Return: file pointeri
 *
 */

FILE *monty_init(int argc, char *file)
{
	FILE *fp;

	if (argc != 2)
	{

		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(file, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	efs.fp = fp;

	return (fp);
}
