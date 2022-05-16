#include "monty.h"

/**
* read_file - function to read file
* @file- pointer to file
*
*
*
*/


void read_file(FILE *file)
{

	char *lineptr = NULL;
	int line = 1;
	int flag = 0;
	size_t n = 0;

	while (getline(&lineptr, &n, file) != EOF)
	{
		flag = tokenizer(lineptr, line, flag);
		line++;
	}
	
	free(lineptr);
}


/**
*
* tokenizer- seperates string by lines to determine function
* @lineptr: string pointer
* @line: line with opcode
* @flag: to know if stack or queue
* Return: flag
*/

int tokenizer(char *lineptr, int line, int flag)
{

	char *value, *opcode, *del;

	del = "\n ";
	opcode = strtok(lineptr, del);
	value = strtok(NULL, del);

	if (opcode != NULL)
	{
		if (opcode[0] == '#')
			return (flag);
		if (strcmp(opcode, "stack") == 0)
		{
			flag = 0;
			return (flag);
		}
		if (strcmp(opcode, "queue") == 0)
		{
			flag = 1;
			return (flag);
		}
		op_code(value, opcode, line, flag);
	}
	return (flag);
}
