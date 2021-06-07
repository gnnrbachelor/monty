#include "monty.h"

/**
 * rotr - Rotates stack to bottom
 * @stack: Beginning of stack
 * @line_number: Line number
 * Return: Void
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	if (temp != NULL && temp->next != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->prev->next = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
