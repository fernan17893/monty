#include "monty.h"

/**
 * op_swap - swaps the top two elements of the stack.
 * @line: line number of the command in monty file
 * @node_head: address of the head
 *
 */

void op_swap(stack_t **node_head, unsigned int line)
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
		tmp_value = tmp_node->n;
		tmp_node->n = tmp_node->next->n;
		tmp_node->next->n = tmp_value;
	}
	else
		error_function(8, NULL, line);
}

/**
 * op_add - swaps the top two elements of the stack.
 * @line: line number of the command in monty file
 * @node_head: address of the head
 *
 */

void op_add(stack_t **node_head, unsigned int line)
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
		tmp_value = tmp_node->n + tmp_node->next->n;
		tmp_node->next->n = tmp_value;
		op_pop(node_head, line);
	}
	else
		error_function(9, NULL, line);
}

/**
 * op_nop - doesn’t do anything.
 * @line: line number of the command in monty file
 * @node_head: address of the head
 *
 */

void op_nop(stack_t **node_head, unsigned int line)
{
	(void)line;
	(void)node_head;
}

/**
 * op_sub - subtracts top element from the second top elemen.
 * @line: line number of the command in monty file
 * @node_head: address of the head
 *
 */

void op_sub(stack_t **node_head, unsigned int line)
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
		tmp_value = tmp_node->next->n - tmp_node->n;
		tmp_node->next->n = tmp_value;
		op_pop(node_head, line);
	}
	else
		error_function(10, NULL, line);
}

/**
 * op_div - divides second top element by the top of stack.
 * @line: line number of the command in monty file
 * @node_head: address of the head
 *
 */

void op_div(stack_t **node_head, unsigned int line)
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
		tmp_value = tmp_node->next->n / tmp_node->n;
		tmp_node->next->n = tmp_value;
		op_pop(node_head, line);
	}
	else
		error_function2(11, line);
}
