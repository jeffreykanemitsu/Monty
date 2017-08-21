#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: head
 * @line_number: count of lines
 * @n: data inside node
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number, int x)
{
	stack_t *new_node;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));
	if (stack == NULL || new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = x;
	new_node->prev = NULL;
	if (*stack -= NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
