#include<stdio.h>
#define MAX 10

int front, rear;

enum{FAILURE, SUCCESS};
int main()
{
	int Queue[MAX];
	int front = 0, rear =0, n = 0, item = 0, k =0;
	printf("Enter the no. of elements to be enqueued\n");
        scanf("%d",&n);
	while(n)
	{ printf("Enter the item to be enqueued\n");
	  scanf("%d",&item); 
	  rear = (++rear)%10;
	  if(front == rear)
	  {
		printf("Queue is Full\n");
		if(rear == 0)
		{
			rear = MAX - 1;
		}
		else
		{
			rear --;
		}
	  }
	  Queue[rear] = item;
	  printf("Item inserted at Queue[%d] is :: %d\n",rear,Queue[rear]);
	  n--;
        }
        printf("Enter no. of items to be popped off\n");
	scanf("%d",&k);
	while(k)
	{
	 if(rear == front)
	 {
		printf("Its underflow\n");
		return FAILURE;
         }
  
	 item = Queue[++front];
	 Queue[front] = 0;
	 printf("item popped out is :: %d\n",item);
	 k--;
        }
} 

