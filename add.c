#include "monty.h"

/**
 * add - Adds top two values of stack
 * @stack: Begin of stack
 * @line_number: Line number
 * Return: Void.
 *
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	unsigned int i = 0;

	if (*stack == NULL || (*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i += (*stack)->n;
	i += (*stack)->next->n;
	temp = *stack;
	(*stack)->next->n = i;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}
