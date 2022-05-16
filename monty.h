#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>




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

extern stack_t *head;

void read_file(FILE *file);
int tokenizer(char *lineptr, int line,int flag);
void op_code(char *value, char *monty_opcode, int line, int flag);
void (*get_op_func(char *s))(stack_t **, unsigned int);
void op_push(stack_t **node_head, unsigned int value);
void op_pint(stack_t **node_head, unsigned int line);
void op_pall(stack_t **node_head, unsigned int line);
void error_function(int error, char *file_name, int line);
void free_dlistint(stack_t *head);
void op_pop(stack_t **node_head, unsigned int line);
void op_mul(stack_t **node_head, unsigned int line);
void op_mod(stack_t **node_head, unsigned int line);
void print_char(stack_t **node_head, unsigned int line);
void print_string(stack_t **node_head, unsigned int line);
void op_rotr(stack_t **node_head, unsigned int line);
void op_swap(stack_t **node_head, unsigned int line);
void op_add(stack_t **node_head, unsigned int line);
void op_nop(stack_t **node_head, unsigned int line);
void op_sub(stack_t **node_head, unsigned int line);
void op_div(stack_t **node_head, unsigned int line);
void op_rotate(stack_t **node_head, unsigned int line);
void op_qpush(stack_t **node_head, unsigned int value);
void error_function2(int error_number, int line);


#endif
