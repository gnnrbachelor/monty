#include "monty.h"

/**
 * ret_operation - Retrieves operation
 * @operation: Operation
 * @stack: Start of stack
 * @line_number: line number
 * Return: Void
 */

void ret_operation(char *operation, stack_t **stack,
			unsigned int line_number)
{
	size_t i = 0;
	instruction_t operations[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};

	for (; operations[i].opcode != NULL; i++)
	{
		if (strcmp(operations[i].opcode, operation) == 0)
		{
			operations[i].f(stack, line_number);
			return;
		}
	}

	fprintf(stderr,
		"L%u: unknown instruction %s\n",
		line_number, operation);
	exit(EXIT_FAILURE);
}

