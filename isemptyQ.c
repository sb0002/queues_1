#include "include.h"

int isemptyQ(struct queue *qu)
{
	if(qu->next==NULL) return 1;		//quite simply, if the sentinel points to nothing, the list is effectively empty
	return 0;
}
