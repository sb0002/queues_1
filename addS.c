#include "include.h"

//add and remove from just after the sentinel

int addS(struct stacked *stack, int num)
{	
	struct stacked *temp, *newnode=malloc(sizeof(struct stacked));
	temp=stack->next;							//the node following the sentinel will be moved, so it must be kept track of
	newnode->next=temp;							//newnode goes between the sentinel and its previous follower
	newnode->data=num;							//newnode contains the user's input
	stack->next=newnode;							//the stack's sentinel now points to the new node
	return(1);
}
