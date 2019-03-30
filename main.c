#include "include.h"

int num;
char numtemp[100]={0}, cmd;
_Bool stackmode=1, numIn=0; 						//default to stack mode, and 'input was not a number' mode

int main(void)
{
	struct stacked *stack=initS();					//initialize the stack
	struct queue *qu=initQ();					//initialize the queue
	while(1)
	{
		printf("==> ");
		fgets(numtemp, 100, stdin);
		
		if(sscanf(numtemp, "%d", &num))				//see if the user entered a number
		{	
			numIn=1;					//convince the rest of the program that a number was received
			cmd='N';					//set cmd to the secret input character that does nothing
		}
		else
		{
			sscanf(numtemp, "%c", &cmd);			//the user did not enter a number, but it may still have been valid input.
		}
		
		if(cmd!='Q' && cmd !='p' && cmd != 's' && cmd != 'q' && cmd != 'N') 		//this lengthy if handles most if not all bad input possibilities
                {
			printf("Command\t\tResult\nnumber\t\tinserts number into the stack/queue\ns or q \t\tswitches to stack or queue mode\np\t\tpops the list/queue\nQ\t\tquits the program\n");
                }
		
		if(cmd=='s')
		{
			stackmode=1;					//switch to stack mode
			printf("<STACK MODE>\n");
			printS(stack);
		}

		if(cmd=='p')						//pop from stack/queue command received
		{
			if(stackmode==1)				
			{
				popS(stack)==1 ? : printf("FAIL\n");	//remove the node following the sentinel, or report failure if there was nothing there
			}
			else
			{
				popQ(qu)==1 ? : printf("FAIL\n");	//remove the node following the sentinel, or report failure if there was nothing there
			}
		}
		
		if(cmd=='q')
		{
			stackmode=0;					//disable stack mode
			printf("<QUEUE MODE>\n");
			printQ(qu);
		}

		if(numIn)
		{
			stackmode==1 ? addS(stack,num) : addQ(qu,num) ;	//add the number to stack or queue based on which mode is active
			numIn=0;					//cycle completed, prepare for next num input
		}

		if(cmd=='Q')
		{
			memfree(stack, qu);				//emancipate all memory
			return 0;
		}
	}
}
