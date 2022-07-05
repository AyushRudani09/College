#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next_link;
};

int main(){
	struct node *first;
	int value;
	printf("Enter Value for insert:->\n");
	scanf("%d",&value);
	first=(struct node*)malloc(sizeof(struct node));

	first->data=value;
	first->next_link=NULL;
	free(first);
	
	return 0;
}