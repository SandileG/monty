#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	/* Check if the stack is empty. */
	if (!stack || !*stack)
	{
		fprintf(stderr,"L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Save the top node and move the stack pointer. */
	temp = *stack;
	*stack = (*stack)->next;

	/* Free the top node. */
	free(temp);
}
