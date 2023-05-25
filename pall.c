#include "monty.h"
/**
 * f_pall - print all stack
 * @head: double pointer to head node
 * @counter: line_number
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
