#include "monty.h"
struct_t *head=NULL

int main(char argc, char *argv)
{

	FILE *file;

	if (argc != 2)
		err_function(1, argv[1], argc);
	if (access(argv[1], R_OK) == -1)
		err_function(2, argv[1], argc);
	file = fopen(argv[1], "r");
	if (file == NULL)
		err_function(2, argv[1], argc);
	read_file(file);
	fclose(file);
	free_dlistint(head);
	return (0);
}


/**
*
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

