#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *value_str;
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

	/* Convert string to integer using atoi. */
	value = atoi(value_str);

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