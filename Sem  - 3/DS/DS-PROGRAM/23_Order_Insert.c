#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next_link;
}*first,*save,*pre_save;



void seq_ins(int value){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=value;
	if (first==NULL)
	{
		new_node->next_link=NULL;
		first=new_node;
	}
	else if(first->data>value){
		new_node->next_link=first;
		first=new_node;
	}
	else{
		save=first;
		pre_save=save;
		while(save->next_link!=NULL && save->data<value){
			pre_save=save;
			save=save->next_link;
		}
		if (save->next_link==NULL)
		{
			save->next_link=new_node;
			new_node->next_link=NULL;
		}
		else{
			new_node->next_link=save;
			pre_save->next_link=new_node;
		}
		
	}
}

void display(){
	save=first;

	if (first!=NULL && first->next_link==NULL)
	{
		printf("\n%d",save->data);
	}
	else{
		while(save!=NULL)
		{
			printf("\n%d",save->data);
			save=save->next_link;
		}
	}
}

void del_first(){
	first=first->next_link;
}

void del_last(){
	save=first;
	pre_save=save;
	while(save->next_link!=NULL){
		pre_save=save;
		save=save->next_link;
	}
	pre_save->next_link=NULL;
}

void delete_specific(int value){
	int count=1;
	save=first;
	pre_save=save;
	while(count<value){
		pre_save=save;
		save=save->next_link;
		count++;

	}
	printf("%d\n",save->data);
	pre_save->next_link=(pre_save->next_link)->next_link;
}

int main()
{

	int ins_ord,choise,del_pos;
	while(1){
		printf("\nEnter Your Choise \nPress 1 for Insert in order:-> \nPress 2 for Display: \nPress 3 for Delete First:-> \nPress 4 for Delete Last:-> \nPress 5 for Delete From Specific Position:->");
		scanf("%d",&choise);
		switch(choise){
			case 1:
			printf("\nEnter Value for Insert:->");
			scanf("%d",&ins_ord);
			seq_ins(ins_ord);
			break;
			case 2:
			display();
			break;
			case 3:
			del_first();
			break;
			case 4:
			del_last();
			break;
			case 5:
			printf("Enter Position for Delete:->");
			scanf("%d",&del_pos);
			delete_specific(del_pos);
			break;
		}
	}
	return 0;
}
