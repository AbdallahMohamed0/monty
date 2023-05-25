#include "monty.h"
/**
* f_push - pushes an element to the stack or queue
* @head: double pointer to head node
* @counter: line_number
* Return: void
*/
void f_push(stack_t **head, unsigned int counter)
{
int n = 0;
int j = 0;
int flag = 0;

if (!bus.arg)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
exit_program(head);
}

if (bus.arg[0] == '-')
j++;

for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > '9' || bus.arg[j] < '0')
flag = 1;
}

if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
exit_program(head);
}

n = atoi(bus.arg);

if (bus.lifi == 0)
addnode(head, n);
else
addqueue(head, n);
}
