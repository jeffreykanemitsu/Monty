#include "monty.h"
/**
 * sub - subtracts top two elements of stack
 * @stack: head of stack
 * @line_number: line count
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *num = *stack;

	if ((*stack)->next == NULL || (*stack) == NULL)
	{
		printf("L%d: can't subtract, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num->next->n -= num->n;
	num->next->prev = NULL;
	*stack = num->next;
	free(num);
}
