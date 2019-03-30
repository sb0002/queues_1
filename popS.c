#include "include.h"

int popS(struct stacked *stack)
{
	if(stack->next==NULL) return 0;			//the stack is empty. nothing to pop
	else
	{
		struct stacked *temp;
		temp=stack->next->next;			//temp is a pointer to the node following the victim
		
		free(stack->next);			//free the doomed node
		stack->next=temp;			//have the sentinel point to the node which was after the victim
		return 1;
	}
}
