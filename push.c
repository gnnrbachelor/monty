#include "monty.h"

/**
 * push - Pushes onto stack
 *
 * @stack: Head
 * @num:  data
 * Return: Void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *n_node = NULL;

	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error: malloc failed\n");
		return;
	}

	n_node->n = line_number;

	if (*stack == NULL)
	{
		n_node->next = *stack;
		n_node->prev = NULL;
		*stack = n_node;
	}
	else
	{
		n_node->next = *stack;
		n_node->prev = (*stack)->prev;
		(*stack)->prev = n_node;
		*stack = n_node;
		return;
	}
}
