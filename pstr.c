#include "monty.h"

/**
 * pstr - Prints String starting from top
 * @stack: Beginning of stack
 * @line_number: Line Number
 * Return: Void
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)(line_number);

	while (temp != NULL)
	{
		if (temp->n == 0 || temp->n < 0 || temp->n > 127)
			break;

		printf("%c", temp->n);
		temp = temp->next;
	}

	printf("\n");
}
