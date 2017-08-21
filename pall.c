#include "monty.h"
/**
 * pall - prints all values on the stack
 * @stack: stack
 * @line_number: count of lines
 *
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *printall;
	(void) line_number;
	printall = *stack;

	while (printall != NULL)
	{
		printf("%d\n", printall->n);
		printall = printall->prev;
	}
}
