#include "monty.h"

/**
 * pint - prints value at top of stack
 * @stack: Stack
 * @line_number: Line Number
 * Return: Void
 *
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
