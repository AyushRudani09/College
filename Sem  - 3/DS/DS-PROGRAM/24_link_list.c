#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next_link;
}*first,*save,*pre_save,*last;

void ins_First(int value){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=value;
	if (first==NULL)
	{
		first=last=new_node;
	}
	else{
		new_node->next_link=first;
		first=new_node;
		last->next_link=first;
	}
}

void display(){
	if(first==last){
		printf("\n%d\n",first->data);
	}
	else{
		while(first!=last){
			printf("\n%d\n",first->data);
			first=first->next_link;
		}
		printf("\n%d\n",last->data);
	}
}

int main(){
	int choise,ins_first_last;
	while(1){
		printf("\n\nEnter Your Choise \nPress 1 for Insert in Front of the linked list:-> \nPress 2 for Display:->");
		scanf("%d",&choise);

		switch(choise){
			case 1:
			printf("Insert Value for Insert:->");
			scanf("%d",&ins_first_last);
			ins_First(ins_first_last);
			break;
			case 2:
			display();
			break;
		}
	}
	return 0;
}