#include "include.h"

int isemptyS(struct stacked *stack)
{
	if(stack->next==NULL) return 1;		//if the sentinel points at nothing, the stack is empty
	return 0;
}
