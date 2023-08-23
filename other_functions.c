#include "monty.h"

/**
 *  get_free - Free stack
 *  @stack: Stack pointer
 *  Return: Void
 */

void get_free(stack_t *stack)
{
	if (stack)
	{
		get_free(stack->next);
		free(stack);
	}
}

/**
 *  _isdigit - Finds if char is a digit or not
 *  @str: Character passed in
 *  Return: 1 for digit, 0 if not
 */

int _isdigit(char *str)
{

	int i = 0;


	if (str[i] == '-')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (1);
		}
		i++;
	}

	return (0);
}