#include "monty.h"

/**
 * mode - Chooses mode
 *
 * @head: Head
 * @data: Data
 * Return: Void
 */

void check_mode(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	(void)line_number;

	i = atoi("t");
	if (1)
		push_n(stack, i);
	else
		push_n(stack, i);
}

/**
 * push - Pushes onto stack
 *
 * @stack: Head
 * @num:  data
 * Return: Void
 */

void push_n(stack_t **stack, unsigned int num)
{
	stack_t *n_node = NULL;

	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error: malloc failed\n");
		return;
	}

	n_node->n = num;
	n_node->prev = NULL;
	n_node->next = NULL;
	if (*stack != NULL)
	{
		n_node->next = *stack;
		(*stack)->prev = n_node;
	}
	*stack = n_node;
}



