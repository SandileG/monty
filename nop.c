#include "monty.h"

/**
 * nop - Doesn't do anything.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	/* Suppress unused parameter warning. */
	(void)stack;
	(void)line_number;
	/* The nop opcode doesn't do anything. */
}
