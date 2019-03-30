#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

struct stacked
{
	int data;
	struct stacked *next;
}*stack;

struct queue
{
	int data;
	struct queue *next;
	struct queue *tailptr;
}*qu;

struct stacked* initS();
struct queue* initQ();

int addS(struct stacked*, int);
int addQ(struct queue*, int);

int popS(struct stacked*);
int popQ(struct queue*);

void printS(struct stacked*);
void printQ(struct queue*);

int isemptyS(struct stacked*);
int isemptyQ(struct queue*);

void memfree(struct stacked*, struct queue*);
