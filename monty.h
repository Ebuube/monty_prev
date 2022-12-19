#ifndef _MONTY_H
#define _MONTY_H


/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



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
 * @f: function to hanle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* externs */
extern int MONTY_MODE;


/* macros and constants */
#define STACK 0
#define QUEUE 1

#define UNUSED __attribute__((unused))


/* function prototypes */
int run_monty(FILE *fd_file);
char **tokenize_2_tk(char *str);

#endif	/* _MONTY_H */
