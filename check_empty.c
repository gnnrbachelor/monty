#include "monty.h"

/**
 * check_empty - Checks for empty lines
 * @buffer: buffer
 * @delim: Delimiters
 * Return: 1 or 0
 *
 */

int check_empty(char *buffer, char *delim)
{
	int i = 0;
	int j = 0;

	for (i = 0; buffer[i]; i++)
	{
		for (j = 0; delim[j]; j++)
		{
			if (buffer[i] == delim[j])
				break;
		}
		if (delim[j] == '\0')
			return (0);
	}
	return (1);
}
