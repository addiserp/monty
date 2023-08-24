#include "monty.h"

/**
 * get_mod - function that computes the rest of the division of the
 * second top element of the stack by the top element of the stack
 *
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 *
 * Description: mod
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 *
 */

void get_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		if (first->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			fclose(file);
			get_free(*stack);
			exit(EXIT_FAILURE);
		}
		second->n %= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
