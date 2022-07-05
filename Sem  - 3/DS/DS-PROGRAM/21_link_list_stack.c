 #include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next_link;
}*top,*save;

void push(int value)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=value;
	if (top==NULL)
	{
		new_node->next_link=NULL;
	}
	else{
		new_node->next_link=top;
	}
	top=new_node;
}

void display()
{
	printf("Linked List Element is:\n");
	save=top;

	if (top!=NULL && top->next_link==NULL)
	{
		printf("\n%d",top->data );
		// printf("%d\n",top->next_link);
	}
	else{
		while(save!=NULL)
		{ 
			printf("%d\n",save->data);
			save=save->next_link;
		}
	}
}
void pop(){
	 top=top->next_link;
}






int main()
{
	int choise,ins_top_value,ins_last_value,spe_del_pos;
	while(1){
		printf("\n\nEnter Your Choise \n Press 1 for push \nPress 2 for pop \nPress 3 for display");
		scanf("%d",&choise);

		switch(choise){
			case 1:
			printf("Enter Value for Insert:->\n");
			scanf("%d",&ins_top_value);
			push(ins_top_value);
			break;
			case 2:
			pop();
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
