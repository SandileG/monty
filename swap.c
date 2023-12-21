#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp = (*stack)->n;

	/* Check if the stack contains less than two elements. */
	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Swap the values of the top two elements. */
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
