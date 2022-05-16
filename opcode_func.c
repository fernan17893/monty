#include "monty.h"

/**
* get_op_func - finds opcode to use
* @s: string with monty code
*
* Return: pointer to function or NULL
*
*
*/

void (*get_op_func(char *s))(stack_t **, unsigned int)
{
	instruction_t functions[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{"pchar", print_char},
		{"pstr", print_string},
		{"rotl", op_rotate},
		{"rotr", op_rotr},
		{NULL, NULL}
	};
	int i = 0;

	while (functions[i].opcode)
	{
		if (!(strcmp(functions[i].opcode, s)))
			return (functions[i].f);
		i++;
	}
	return (NULL);
}
