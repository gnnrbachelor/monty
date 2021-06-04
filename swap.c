#include "monty.h"

/**
 * swap - Swaps top two elements
 * @stack: Head of stack
 * @line_number
 * Return: Void
 *
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = i;

}

