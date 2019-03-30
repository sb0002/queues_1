#include "include.h"

int popQ(struct queue *qu)
{
	if(qu->next==NULL || qu->tailptr==NULL) return 0;		//queue empty. nothing to pop.
	struct queue *temp;						//make a holder node
	temp=qu->next->next;						//store the location of the node after the one we'll be deleting
	free(qu->next);							//free the memory of the doomed node
	qu->next=temp;							//bridge the new gap
	return 1;
}
