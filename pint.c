#include "monty.h"
/**
 * f_pint - prints the value at the top
 * of the stack (ASCII) value of the node 
 * @head: double pointer to head node
 * @counter: line_number
 * Return: void
*/
void exit_program(stack_t **head);

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		exit_program(head);
	}

	printf("%d\n", (*head)->n);
}

void exit_program(stack_t **head)
{
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
