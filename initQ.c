#include "include.h"

struct queue *initQ()
{
	struct queue *qu=malloc(sizeof(struct queue));		//initialize the queue's sentinel, fill its data slot with nonsense, have it point to nothing and bite its own tail
	qu->next=NULL;
	qu->data=251;
	qu->tailptr=qu;
	return(qu);
}
