#include "monty.h"

/**
 * main - Entry Point
 * @ac: Argument Count
 * @av: Array of pointers to args
 * Return: 0
 *
 */

int main(int ac, char **av)
{

	unsigned int line_number = 0;
	char *buffer = NULL;
	size_t buffer_length = 0;
	stack_t *stack = NULL;
	FILE *file_for = NULL;
	char *operation = NULL;

	global_s.mode = 0;
	global_s.value = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_for = fopen(av[1], "r");
	if (file_for == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&buffer, &buffer_length, file_for)) != -1)
	{
		line_number++;
		operation = strtok(buffer, "\n\t\r ");
		if (operation == NULL)
		{
			if (check_empty(buffer, "\n\t\r "))
				continue;
		}
		if (operation != NULL && operation[0] != '#')
			ret_operation(operation, &stack, line_number);
	}
	free_stack(&stack);
	free(buffer);
	fclose(file_for);
	exit(EXIT_SUCCESS);
}
