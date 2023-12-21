#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	/* Check if the stack contains less than two elements. */
	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Add the top two elements and store the result in the second top element. */
	(*stack)->next->n += (*stack)->n;

	/* Pop the top element. */
	*stack = (*stack)->next;
	free(temp);
}
