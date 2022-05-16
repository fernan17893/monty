#include "monty.h"

/**
 * op_rotate - rotates the stack to the bottom
 * @node_head: head of the dlistint
 * @line: line number of the command
 *
 */

void op_rotate(stack_t **node_head, unsigned int line)
{
	stack_t *tmp_node;
	int tmp_value = 0, tmp_value_n = 0, count = 0;

	(void)line;
	tmp_node = *node_head;
	while (tmp_node)
	{
		tmp_value = tmp_node->n;
		tmp_node = tmp_node->next;
		count++;
	}
	tmp_node = *node_head;
	if (count > 1)
	{
		while (tmp_node->next)
		{
			tmp_value_n = tmp_node->n;
			tmp_node->n = tmp_value;
			tmp_value = tmp_value_n;
			tmp_node = tmp_node->next;
		}
		tmp_node->n = tmp_value;
	}
}

/**
 * op_qpush - pushes an element to the queue.
 * @value: Value to add to the node
 * @actual_head: address of the head
 *
 */

void op_qpush(stack_t **node_head, unsigned int value)
{

	stack_t *new_node;
	stack_t *last;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		error_function(4, NULL, value);
	last = *node_head;
	new_node->n = value;
	new_node->next = NULL;
	if (*node_head == NULL)
	{
		head = new_node;
		new_node->prev = NULL;
		return;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
}
