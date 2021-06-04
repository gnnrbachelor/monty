#include "monty.h"

/**
 * return_operation - Retrieves operation
 * @operation: Operation
 * @stack: Start of stack
 * @lin_num: line number
 * Return: Void
 */

void return_operation(char *operation, stack_t **stack, unsigned int line_number)
{
	size_t i = 0;
	instruction_t operations[] = {
		{"push", push},
		{"pall", pall},
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

	dprintf(STDOUT_FILENO, "L%u: unknown instruction %s\n", line_number, operation);
	exit(EXIT_FAILURE);
}

