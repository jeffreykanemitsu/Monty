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
	stack_t *rmtop;

	rmtop = *stack;

	if (rmtop == NULL)
	{
		printf("L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	else if (rmtop->next != NULL)
	{
		rmtop->next->prev = NULL;
	}
	*stack = rmtop->next;
	line_number++;
	free(rmtop);
}
