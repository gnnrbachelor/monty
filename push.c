#include "monty.h"

/**
 * digit_check - checks for digits
 * @arg: argument
 * Return: 1 or 0
 */

int digit_check(char *arg)
{
	int i = 0;

	for (; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if (isdigit(arg[i] == 0))
			return (1);
	}
	return (0);
}

/**
 * push - Pushes onto stack
 *
 * @stack: Head
 * @line_number:  data
 * Return: Void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *n_node = NULL;
	char *arg = NULL;
	unsigned int i = 0;

	arg = strtok(NULL, "\n\t\r ");
	if (arg == NULL || digit_check(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = atoi(arg);

	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error: malloc failed\n");
		return;
	}

	n_node->n = i;

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
