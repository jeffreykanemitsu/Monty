#include "monty"
/**
 * op_func - contains struct for opcodes
 * @opcode: opcode
 * @stack: stack
 * @line_number: line number
 *
 * Return: int
 */

int op_func(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_ op_codes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	},

	int x = 0;

	while (op_codes[x].opcode)
	{
		if (strcmp(opcode, op_codes[x].opcode) == 0)
		{
			(op_codes[x].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
		x++;
	}
	printf("L%d: unknown instructions %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
