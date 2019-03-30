#include "include.h"

void printS(struct stacked *stack)
{
	if(isemptyS(stack))
	{
		printf("Stack is empty.\n");
		return;
	}
	stack=stack->next;			//skip the sentinel
	printf("TOS-> ");
	while(stack!=NULL)			//loop through the stack until the end is hit, printing out the data in each node
	{
		printf("%i ",stack->data);
		stack=stack->next;
	}
	printf("\n");
}
