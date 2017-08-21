#include "monty.h"
/**
 * add - adds first two nodes
 * @stack: pointer to top of stack
 * @line_number: line count
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->prev != NULL || (*stack) != NULL)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->prev->n += (*stack)->n;
	*stack = (*stack)->prev;
}
