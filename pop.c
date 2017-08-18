#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: value that is stored
 * @line_number: count of lines
 *
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t rmtop;

	rmtop = *stack;

	if (rmtop != NULL)
	{
		rmtop = rmtop->next;
		printf("%d\n", rmtop->n;
	}
	else
	{
		printf("L%d: can't pop an empty stack", line_number);
		exit("EXIT_FAILURE");
	}
}
