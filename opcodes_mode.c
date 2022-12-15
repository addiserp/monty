#include "monty.h"

/**
 * addst - changes mode to stack
 * @stack: pointer to stack
 * @nline: line number
 * Return: void.
 */
void addst(stack_t **stack, unsigned int nline)
{
	(void)nline;
	(void)stack;

	arg.flag = 0;
}

/**
 * addqu - changes mode to queue
 * @stack: pointer to stack
 * @nline: line number
 * Return: void.
 */
void addqu(stack_t **stack, unsigned int nline)
{
	(void)nline;
	(void)stack;

	arg.flag = 1;
}
