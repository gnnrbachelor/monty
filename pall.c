#include "monty.h"

/**
 * pall - prints values in stack
 * @stack: Pointer to beg of stack
 * @line_number: unsigned int
 * Return: Void
 *
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	if (*stack)
	{
		temp = *stack;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
