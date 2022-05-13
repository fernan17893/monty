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
