#include "include.h"

void memfree(struct stacked *stack, struct queue *qu)
{
	while(1)
	{
		free(stack);
		if(stack->next==NULL) break;
		stack=stack->next;
	}
	
	while(1)
	{
		free(qu);
		if(qu->next==NULL) break;
		qu=qu->next;
	}
}
