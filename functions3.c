#include "monty.h"


/**
* op_mul- multiplies top and seconde element of stack
* @line: line
* @node_head: head of stack
*
*/

void op_mul(stack_t **node_head, unsigned int line)
{

	stack_t *tmp_node = *node_head;
	int count = 0, tmp_val = 0;

	while (tmp_node)
	{
		tmp_node = tmp_node->next;
		count++;
	}

	if (count >= 2)
	{
		tmp_node = *node_head;
		tmp_val = tmp_node->next->n * tmp_node->n;
		tmp_node->next->n = tmp_val;
		op_pop(node_head, line);
	}
	else
		error_function2(13, line);
}


/**
* op_mod- modify top element of stack
* @line: line 
* @node_head: head
*/

void op_mod(stack_t **node_head, unsigned int line)
{
	stack_t *tmp_node = *node_head;
	int count = 0, tmp_value = 0;

	while (tmp_node)
	{
		tmp_node = tmp_node->next;
		count++;
	}
	if (count >= 2)
	{
		tmp_node = *node_head;
		if (tmp_node->n == 0)
			error_function2(12, line);
	tmp_value = tmp_node->next->n % tmp_node->n;
	tmp_node->next->n = tmp_value;
	op_pop(node_head, line);
	}
	else
		error_function2(14, line);
}


/**
* op_char - prints the string starting at the top of the stack
* @node_head: head of the dlistint
* @line: line number of the command
*/

void print_char(stack_t **node_head, unsigned int line)
{

	stack_t *tmp_node;

	tmp_node = *node_head;
	if (*node_head != NULL)
		if (tmp_node->n >= 32 && tmp_node->n <= 126)
			printf("%c\n", tmp_node->n);
		else
			error_function2(16, line);
	else
		error_function2(15, line);
}


/**
* op_pstr - prints the string starting at the top of the stack
* @node_head: head of the dlistint
* @line: line number of the command
*
*/

void print_string(stack_t **node_head, unsigned int line)
{

	stack_t *tmp_node;

	(void)line;
	tmp_node = *node_head;
	if (tmp_node == NULL)
	{
		printf("\n");
		return;
	}
	while (tmp_node != NULL)
	{
		if (tmp_node->n == 0)
			break;
		if (tmp_node->n < 32 || tmp_node->n > 126)
			break;
		printf("%c", tmp_node->n);
		tmp_node = tmp_node->next;
	}
	printf("\n");
}

/**
* op_rotate - rotates the stack to the top.
* @node_head: head of the dlistint
* @line: line number of the command
*/

void op_rotr(stack_t **node_head, unsigned int line)
{
	stack_t *tmp_node;
	int tmp_val = 0, count = 0;

	(void)line;
	tmp_node = *node_head;
	while (tmp_node)
	{
		tmp_node = tmp_node->next;
		count++;
	}
	tmp_node = *node_head;
	if (count > 1)
	{
		tmp_val = tmp_node->n;
		while (tmp_node->next)
		{
			tmp_node->n = tmp_node->next->n;
			tmp_node = tmp_node->next;
		}
		tmp_node->n = tmp_val;
	}
}
		
