#include "monty.h"
/**
 * pchar - prints char
 * @stack: head of stack
 * @line_number: line count
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *x;

	x = *stack;
	if (*stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (x->n < 0 || x->n > 127)
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(x->n);
	putchar('\n');
}
