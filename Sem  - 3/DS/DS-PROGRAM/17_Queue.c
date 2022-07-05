#include<stdio.h>
int que[6],n=4,rear=-1,front=-1;
void enqueue(int value){
	if (rear==n-1)
	{
		printf("Queue is Overflow.!\n");
	}
	else{
		rear=rear+1;
		que[rear]=value;
		if (front==-1)
		{
			front=0;
		}
	}
}

void Display()
{
	printf("\nQueue Element is:->\n");
	for (int i = front; i <=rear; ++i)
	{
		printf("%d\n",que[i]);
	}
}

int dequeue(){
	int value;
	if(front==-1)
	{
		printf("Queue is Underflow.!\n");
	}
	else{
		value=que[front];
		if (front==rear)
		{
			front=rear=-1;
		}
		else
		front++;
		return value;
	}
}


int main()
{
	int choise,enqueue_value,dequeue_value;
	while(1)
	{
		printf("\n\nEnter Your Choise Press 1 for Enqueue, Press 2 for Dequeue, Press 3 for Display\n");
		scanf("%d",&choise);
		switch(choise){
			case 1:
			printf("Enter Value For Enqueue:->\n");
			scanf("%d",&enqueue_value);
			enqueue(enqueue_value);
			break;
			case 2:
			dequeue_value=dequeue();
			printf("Dequeue is:->%d",dequeue_value);
			break;
			case 3:
			Display();
			break;
		}

	}
	return 0;
}