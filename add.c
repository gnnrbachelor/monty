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
	stack_t *c_node = *stack;
	unsigned int i = 0;
	unsigned int j = 0;

	while (c_node)
	{
		j++;
		c_node = c_node->next;
	}

	if (*stack == NULL || (*stack)->next == NULL || (*stack)->next->next == NULL || j < 2)
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
