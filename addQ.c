#include "include.h"

//add to end, remove from just after sentinel

int addQ(struct queue *qu, int num)
{
	struct queue *temp, *newnode=malloc(sizeof(struct queue));
	newnode->data=num;						//assign the user's input to the new node's data slot
	newnode->next=NULL;						//the new node at the end of the list has no followers
	if(qu->next==NULL) qu->next=newnode;				//if this is the first time a node is added, the sentinel points to the new node, its first follower
	temp=qu->tailptr;						//the soon-to-be-previous node will need to precede the new node
	temp->next=newnode;						//the soon-to-be-previous node precedes the new node
	qu->tailptr=newnode;						//the node which was soon-to-be-previous is now actually previous, and it points at the new node
}
