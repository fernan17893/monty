#include "monty.h"

/**
* error_function- prints error message
* @error: number of error
* @file_name: name of file
* @line: line of monty code
**/

void error_function(int error, char *file_name, int line)
{
	switch (error)
	{
	case 1:
		fprintf(stderr, "L%d: usage: push integer\n", line);
		break;
	case 2:
		fprintf(stderr, "L%d: unknown instruction %s\n", line, file_name);
		break;
	case 3:
		fprintf(stderr, "Error: malloc failed\n");
		break;
	case 4:
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		break;
	default:

		return;
	}
}
