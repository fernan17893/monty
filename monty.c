#include "monty.h"
stack_t *head=NULL;

/**
* main- reads monty program code
* @argc: arguments
* @argv: command line value
*
*/



int main(int argc, char **argv)
{

	FILE *file;

	if (argc != 2)
		error_function(1, argv[1], argc);
	if (access(argv[1], R_OK) == -1)
		error_function(2, argv[1], argc);
	file = fopen(argv[1], "r");
	if (file == NULL)
		error_function(2, argv[1], argc);
	read_file(file);
	fclose(file);
	free_dlistint(head);
	return (0);
}
