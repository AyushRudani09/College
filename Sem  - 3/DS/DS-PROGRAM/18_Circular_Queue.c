#include <stdio.h>
int cqu[5],n=2,rear=-1,front=-1;

void enqueue(int Value)
{
	if (rear==n)
	{
		rear=0;
		if (front==0)
		{
			printf("Circular Queue is Overflow.!");
		}
		else{
			cqu[rear]=Value;
		}
	}
	if(front==rear && front!=-1 && front!=0)
	{
		printf("Circular Queue is OverFlow.!\n");
	}
	else{
		rear++;
		cqu[rear]=Value;
		if (front==-1)
		{
			front=0;
		}	
	}
	
}


void Display(){
	printf("\nCircular Element is :->\n");
	for (int i = front; i <=rear; ++i)
	{
		printf("%d\n",cqu[i]);
	}
}

int dequeue(){
	int Value;
	if (front==-1)
	{
		printf("Circular Queue is UnderFlow.!\n");
	}
	Value=cqu[front];
	if (front==rear)
	{
		front=rear=-1;
	}
	if (front==n)
	{
		front=0;
	}
	else{
		front++;
	}

	return Value;
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