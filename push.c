#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	char *value_str;
	char *endptr;
	int value;

	/* Check if there is an argument. */
	if (!stack || !line_number)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Get the integer argument. */
	value_str = strtok(NULL, "\n");
	if (!value_str)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Convert string to integer using strtol for better error handling. */
	value = strtol(value_str, &endptr, 10);

	/* Check for conversion errors. */
	if (*endptr != '\0')
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Separate block for memory allocation and node setup. */
	{
		stack_t *new_node;

		new_node = malloc(sizeof(stack_t));
		if (!new_node)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new_node->n = value;
		new_node->prev = NULL;
		new_node->next = *stack;
		if (*stack)
		{
			(*stack)->prev = new_node;
		}
		*stack = new_node;
	}
}
