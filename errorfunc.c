#include "monty.h"

/**
* error_function- prints error message
* @error: number of error
* @file_name: name of file
* @line: line of monty code
**/

void error_function(int error_number, char *file_name, int line)
{
	switch (error_number)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n", file_name);
			break;
		case 3:
			fprintf(stderr, "L%d: unknown instruction %s\n",line, file_name);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", line);
			break;
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n", line);
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n", line);
			break;
		case 8:
			fprintf(stderr, "L%d: can't swap, stack too short\n", line);
			break;
		case 9:
			fprintf(stderr, "L%d: can't add, stack too short\n", line);
			break;
		case 10:
			fprintf(stderr, "L%d: can't sub, stack too short\n", line);
			break;
		
		default:

		return;
	}
	free_dlistint(head);
	exit(EXIT_FAILURE);
}


/**
 * error_function2 - function to print in stderr all the errors
 * @error_number: number of the error
 * @line: line of the monty file that is readed.
 *
 */
void error_function2(int error_number, int line)
{
	switch (error_number)
	{
		case 11:
			fprintf(stderr, "L%d: can't div, stack too short\n", line);
			break;
		case 12:
			fprintf(stderr, "L%d: division by zero\n", line);
			break;
		case 13:
			fprintf(stderr, "L%d: can't mul, stack too short\n", line);
			break;
		case 14:
			fprintf(stderr, "L%d: can't mod, stack too short\n", line);
			break;
		case 15:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
			break;
		case 16:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
			break;
	default:
		return;
	}
	free_dlistint(head);
	exit(EXIT_FAILURE);
}
