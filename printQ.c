#include "include.h"

void printQ(struct queue *qu)
{
	if(isemptyQ(qu))
	{
		printf("Queue is empty.\n");
		return;
	}
	qu=qu->next;				//skip the sentinel
	printf("HEAD-> ");
	while(qu!=NULL)				//loop through the queue, printing out the data in each node's slot
	{
		printf("%i ",qu->data);
		qu=qu->next;
	}
	printf("<-TAIL\n");
}
