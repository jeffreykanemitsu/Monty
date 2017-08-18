#include "monty.h"

/**
 * main - main function of the monty language program
 * @argc: argument count
 * @argv: arguments given
 *
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	stack_t *stack = NULL;
	char *token, *line;
	unsigned int line_num = 0;
	size_t len = 0;

	fp = fopen(argv[1], "r")
	line = NULL;
	token = NULL;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &len, fp)) != -1)
	{
		line_num++;
		token = strtok(line, "\n\t");
		if (token != NULL)
		{
			op_struct(line, &stack, line_num);
		}
	}
	free(line);
	fclose(fp);
	return (EXIT_SUCCESS);
}
