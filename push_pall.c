#include "monty.h"

/**
 * push - function that pushes an element onto top of the stack
 *
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 * @temp: Pointer to instruction
 *
 * Description: 0. push, pall
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 *
 */
void push(stack_t **stack, unsigned int line_number, char *temp)
{

	stack_t *new_top;

	(void)line_number;

	if (temp == NULL || _isdigit(temp) == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
		if (_isdigit(temp) == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(file);
			get_free(*stack);
			exit(EXIT_FAILURE);
		}
	}
	new_top = malloc(sizeof(stack_t));
	if (new_top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(file);
		exit(EXIT_FAILURE);
	}
	new_top->n = atoi(temp);
	new_top->next = NULL;
	new_top->prev = NULL;
	if (*stack)
	{
		new_top->next = *stack;
		(*stack)->prev = new_top;
		*stack = new_top;
	}
	*stack = new_top;
}


/**
 * pall - function that prints all elements on the stack
 *
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 *
 * Description: 0. push, pall
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
