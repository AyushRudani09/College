#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next_link;
}*first,*save;

void ins_first(int value)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=value;
	if (first==NULL)
	{
		new_node->next_link=NULL;
	}
	else{
		new_node->next_link=first;
	}
	first=new_node;
}


void ins_last(int value){
	save=first;
	while(save->next_link!=NULL)
	{
		save=save->next_link;
	}
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=value;
	save->next_link=new_node;
	new_node->next_link=NULL;
}

void display()
{
	printf("Linked List Element is:");
	save=first;

	if (first!=NULL && first->next_link==NULL)
	{
		printf("\n%d",first->data );
		printf("%d\n",first->next_link);
	}
	else{
		while(save!=NULL)
		{ 
			printf("%d\n",save->data);
			save=save->next_link;
		}
	}
}

void delete_first(){
	 first=first->next_link;
}

void del_last(){
	struct node *trash_ptr;
	save=first;
	while(save->next_link!=NULL){
		trash_ptr=save;
		save=save->next_link;
	}
	printf("%d",trash_ptr->data);
	trash_ptr->next_link=NULL;
}

void delete_specific(int value){
	int count=1;
	if (value==2)
	{
		save=first;
	}
	else{
		while(count<value){
		save=first;
		save=save->next_link;
		count++;
	}	
	}
	printf("%d\n",save->data);
	save->next_link=(save->next_link)->next_link;
}


int main()
{
	int choise,ins_first_value,ins_last_value,spe_del_pos;
	while(1){
		printf("\n\nEnter Your Choise Press 1 for insert a node at the front of the linked list \nPress 2 for Display all node \nPress 3 for Delete a first node of the linked list \nPress 4 for Insert a node at the end of the linked list \nPress 5 Delete last node of the linked list \nPress 6 for Delete a node from specified position:");
		scanf("%d",&choise);

		switch(choise){
			case 1:
			printf("Enter Value for Insert:->\n");
			scanf("%d",&ins_first_value);
			ins_first(ins_first_value);
			break;
			case 2:
			display();
			break;
			case 3:
			delete_first();
			break;
			case 4:
			printf("Enter Value For Insert last:->\n");
			scanf("%d",&ins_last_value);
			ins_last(ins_last_value);
			break;
			case 5:
			del_last();
			break;
			case 6:
			printf("Enter Position for Delete Specific Node:->\n");
			scanf("%d",&spe_del_pos);
			delete_specific(spe_del_pos);
			break;
			default:
			exit(0);
		}
	}
	return 0;
}
