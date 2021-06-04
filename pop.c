#include "monty.h"

/**
 * pop - Pops top element
 * @stack: Head of stack
 * @line_number: Line number
 * Return: Void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (current->next != NULL)
	{
		current = current->next;
		current->prev = temp->prev;
		*stack = current;
	}
	else
		*stack = NULL;

	free(temp);
}
