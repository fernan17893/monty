#include "monty.h"

/**
* op_code- finds opcode to use
* @value: Value being used
* @monty_opcode:
* @line: line where code is
* @flag: to know if it is stack or queue
*/

void op_code(char *value, char *monty_opcode, int line, int flag)
{
	void (*op) (stack_t **, unsigned int);
	int i = 1, j = 0;
	unsigned int int_value = 0;

	op = get_op_func(monty_opcode);
	if (op)
	{
		if (strcmp(monty_opcode, "push") == 0)
		{
			if (value == NULL)
				error_function(5, monty_opcode, line);
			else if (value[0] == '-')
			{
				value = value + 1;
				i = (i * -1);
			}

			while (value[j])
			{
				if (isdigit(value[j]) == 0)
				error_function(5, monty_opcode, line);
				j++;
			}
			int_value = atoi(value) * i;
			if (flag == 0)
				op(&head, int_value);
		}
		else
			op(&head, line);
		return;
	}
	error_function(3, monty_opcode, line);
}
