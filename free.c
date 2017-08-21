#include "monty.h"
/**
 * free_stuff - frees stack
 * @stack: stack
 * Return: nothing
 */
void free_stuff(stack_t **stack)
{
	stack_t *free_it;

	while (*stack != NULL)
	{
		free_it = *stack;
		*stack = (*stack)->next;
		free(free_it);
	}
}
