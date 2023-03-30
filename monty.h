#ifndef MONTY
#define MONTY

/* strtok Delimiters */

#define DELIMS "\n \r\t"
#define  _GNU_SOURCE

/* libraries */
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/* structs */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct free_struct - opcode and its function
 * @line: line buffer
 * @fp: file pointer
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct free_struct
{
char *line;
FILE *fp;
} early_free_struct;

extern early_free_struct efs;

/* function protypes */

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void check_command(stack_t **stack, char *op, unsigned int line_num);
int space_count(char *str, char *delimiter);
void monty_exit(stack_t **stack);
void read_file(stack_t **stack);
FILE *monty_init(int argc, char *file);
char **ndsplitter(char *fun, char *delimiter);
void free_list(char **list);
int isonlyspaces(char *str);
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void early_free(stack_t **head);
int _isdigit(char *token);
void sub(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);




#endif /* MONTY */

