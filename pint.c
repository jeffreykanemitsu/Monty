#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: value that is stored
 * @line_number: count of lines
 *
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *printval;

	printval = *stack;
	if (printval != NULL)
	{
		printf("%d\n", printval->n);
	}
	else
	{
		printf("L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
}
