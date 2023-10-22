#ifndef MAIN_H
#define MAIN_H
#define SIZE 50 /* Define the size of the stack*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/* Global declaration of variables for testing */

extern int stack[SIZE]; /* Array implementation of stack*/
extern int top; /* To insert and delete the data elements in the stack*/
extern int i; /* To traverse the loop to while displaying the stack*/
extern int choice; /* To choose either of the 3 stack operations*/

/* DATA STRUCTURES*/

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

/* FUNCTION PROTOTYPES GOES HERE*/

void file_error(char *file);
int tokenize(char *line, char *instruction[]);
void instruction_error(unsigned int line_num, char *opcode);
void push(stack_t **head, unsigned int line_num, const char *data);
void pall(stack_t **head, unsigned int line_num);
void pint(stack_t **head, unsigned int line_num);
void pop(stack_t **head, unsigned int line_num);
void swap(stack_t **head, unsigned int line_num);
void add(stack_t **head, unsigned int line_num);
void nop(stack_t **head, unsigned int counter);
void opcode_operation(char *instruction[], unsigned int line_num);
void malloc_error(void);
void stack_empty_error(unsigned int line_num);
void swap_error(unsigned int line_num);
void (*operate(char *opcode))(stack_t **stack, unsigned int line_number);
int add_node(stack_t **head, int data);
void free_dll(stack_t **head);
void sub(stack_t **head, unsigned int line_num);
void divide(stack_t **head, unsigned int line_num);
void mul(stack_t **head, unsigned int line_num);
void mod(stack_t **head, unsigned int line_num);
void pchar(stack_t **head, unsigned int line_num);
void pstr(stack_t **head, unsigned int line_num);

#endif
