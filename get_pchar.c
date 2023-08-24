#include "monty.h"

/**
 * get_pchar - Function that prints the char at the top of the stack.
 *
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number where the instruction appears.
 *
 * Description: Implementation of the `pchar` opcode.
 * Return: No return value.
 */
void get_pchar(stack_t **stack, unsigned int line_number)
{
	if ((stack == NULL) || ((*stack) == NULL))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*stack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
