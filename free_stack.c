#include "monty.h"

/**
 * free_stack - Frees stack
 *
 * @stack: Stack
 * Return: Void
 */


void free_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

