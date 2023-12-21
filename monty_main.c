#include "monty.h"

/**
 * main - Entry point for the Monty ByteCode Interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	char *opcode;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;

		/* Tokenize the line and extract opcode and arguments */
		opcode = strtok(line, " \n\t");
		if (opcode)
		{
			if (strcmp(opcode, "push") == 0)
			{
				push(&stack, line_number);
			}
			else if (strcmp(opcode, "pall") == 0)
			{
				pall(&stack, line_number);
			}
			else if (strcmp(opcode, "pint") == 0)
			{
				pint(&stack, line_number);
			}
		}
	}
	free(line);
	fclose(file);

	/* Clean up remaining nodes in the stack if needed */
	while (stack)
	{
		stack_t *temp = stack;

		stack = stack->next;

		free(temp);
	}

	return (0);
}
