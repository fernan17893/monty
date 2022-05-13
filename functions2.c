#include "monty.h"

/**
* op_push- pushes element to stack
* @value: Value to add to node
* @node_head: address of head
*
*
*/

void op_push(stack_t **node_head, unsigned int value)
{

	stack_t *new_node;
	stack_t *current = *node_head;
	extern int val;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		val = -3;
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->next = *node_head;
	new_node->prev = NULL;

	if (current != NULL)
		current->prev = new_node;
	head = new_node;
}

/**
*
* op_pall - prints all stack
* @line: line with command
* @node_head: node head address
*
*
*
*/

void op_pall(stack_t **node_head, unsigned int line)
{

	stack_t *tmp_node;

	(void)line;

	if (node_head != NULL)
	{
		tmp_node = *node_head;
		while (tmp_node != NULL)
		{
			printf("%d\n", tmp_node->n);
			tmp_node = tmp_node->next;
		}
	}
}

/**
* op_pint- prints top of stack
* @node_head: head of node
* @line: command line
*
*/

void op_pint(stack_t **node_head, unsigned int line)
{
	stack_t *tmp_node;

	(void)line;
	tmp_node = *node_head;
	if (*node_head != NULL)
		printf("%i\n", tmp_node->n);
	else
		error_function(6, NULL, line);
}

/**
*
* free_dlistint - free doubly linked list
* @head: address of the head of linked list
*
*/


void free_dlistint(stack_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
				free_dlistint(head->next);
			free(head);
	}
}
