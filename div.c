#include "monty.h"
/**
 * _div - divides the top two elements of stack
 * @stack: head of stack
 * @line_number: line count
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *num = *stack;

	if ((*stack)->next == NULL || (*stack) == NULL)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	num->next->n /= num->n;
	num->next->prev = NULL;
	*stack = num->next;
	free(num);
}
