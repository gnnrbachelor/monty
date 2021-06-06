#include "monty.h"

/**
 * mod - Mods top two values of stack
 * @stack: Begin of stack
 * @line_number: Line number
 * Return: Void.
 *
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	unsigned int i = 0;

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (*stack == NULL || (*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->next->n % (*stack)->n;
	temp = *stack;
	(*stack)->next->n = i;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}
