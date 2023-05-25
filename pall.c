#include "monty.h"
/**
 * f_pall - print all stack
 * @head: double pointer to head node
 * @counter: line_number
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *current = *head;

(void)counter;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
