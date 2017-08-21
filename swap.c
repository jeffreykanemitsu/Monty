#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line count
 *
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int swapped;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swapped = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swapped;
}
