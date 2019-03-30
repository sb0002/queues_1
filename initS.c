#include "include.h"

struct stacked *initS()
{
	struct stacked *stack=malloc(sizeof(struct stacked));		//initialize a stack sentinel node, fill its data slot with nonsense, and have it point at nothing
	stack->next=NULL;
	stack->data=-1;
	return(stack);
}
