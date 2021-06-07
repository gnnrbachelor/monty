#include "monty.h"

/**
 * rotl - Rotates stack to top
 * @stack: Beginning of stack
 * @line_number: Line number
 * Return: Void
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int t = 0;
	(void)line_number;

	if (temp != NULL && temp->next != NULL)
	{
		while (temp->next != NULL)
		{
			t = temp->n;
			temp->n = temp->next->n;
			temp->next->n = t;
			temp = temp->next;
		}
	}
}
