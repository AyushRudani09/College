#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next_link;
}*rear,*front,*save,*prefront;

void enqueue(int value)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=value;
	if (rear==NULL)
	{
		new_node->next_link=NULL;
	}
	else{
		new_node->next_link=rear;
	}
	rear=new_node;
}

void display()
{
	printf("Linked List Element is:\n");
	save=rear;

	if (rear!=NULL && rear->next_link==NULL)
	{
		printf("\n%d",rear->data );
		// printf("%d\n",first->next_link);
	}
	else{
		while(save!=NULL)
		{ 
			printf("%d\n",save->data);
			save=save->next_link;
		}
	}
}
void dequeue(){
	prefront=rear;
	front=rear;
	// printf("%d",front->next_link);
	if (front->next_link==NULL)
	{
		rear=NULL;
	}
	while(front->next_link!=NULL){
		prefront=front;
		front=front->next_link;
	}
	prefront->next_link=NULL;
}

int main()
{
	int choise,ins_first_value,ins_last_value,spe_del_pos;
	while(1){
		printf("\n\nEnter Your Choise \n Press 1 for push \nPress 2 for dequeue \nPress 3 for display");
		scanf("%d",&choise);

		switch(choise){
			case 1:
			printf("Enter Value for Insert:->\n");
			scanf("%d",&ins_first_value);
			enqueue(ins_first_value);
			break;
			case 2:
			dequeue();
			break;
			case 3:
			display();
			break;
			
			default:
			exit(0);
		}
	}
	return 0;
}
