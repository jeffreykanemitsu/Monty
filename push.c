#include "monty.h"

/**
 * push - function that pushes an element to the stack
 * @stack: stack
 * @line_number: data
 * Return: none
 **/
void push(stack_t **stack, unsigned int line_number)
{
	int x;
	char *token;
	stack_t *new_node;

	token = strtok(NULL, "\r\n\t ");
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (token == NULL)
	{
		printf("L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	for (x = 0; token[x] != '\0'; x++)
	{
		if (isdigit(token[x]) == 0)
		{
			printf("L%dline_number>: usage: push integer", line_number);
			exit(EXIT_FAILURE);
		}
	}
	new_node->n = atoi(token);
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

