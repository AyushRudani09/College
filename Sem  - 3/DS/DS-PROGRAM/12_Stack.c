#include <stdio.h>
int st[100],n=5,top=-1;

void push(int value)
{
	if (top==n-1)
	{
		printf("Stack is Overflow\n");
	}
	else{
		top=top+1;
		st[top]=value;
	}
}

int pop(){
	int value;
	if (top==-1)
	{
		printf("Stack is Underflow no pop operation Available.!\n");
	}
	else{
		value=st[top];
		top=top-1;
	}
	return value;
}

void display(){
	for (int i = 0; i <=top; ++i)
	{
		printf("%d\n",st[i]);
	}
}

int peep(int i){
	if (top-i<=-1)
	{
		printf("Stack Underflow Peep operation not possible.!\n");
	}
	else
	{
		return st[top-i+1];
	}
}


void change(int i,int cvalue){
	if (top-i<=-1)
	{
		printf("Stack Underflow Change operation not possible.!\n");
	}
	else
	{
		st[top-i+1]=cvalue;
	}
}

int main()
{
	int choise,value,popvalue,peepval,peepfindval;
	while(1)
	{
		
		printf("Enter Your Choise Press 1 for PUSH, Press 2 for POP, Press 3 for Display, Press 4 for Peep Operation, Press 5 for Change Operation.");
		scanf("%d",&choise);
		switch(choise)
		{
			case 1:
			printf("Enter Valur For Push=");
			scanf("%d",&value);
			push(value);
			break;
			case 2:
			popvalue=pop();
			break;
			case 3:
			display();
			break;
			case 4:
			printf("Ener Position for search in stack:\n");
			scanf("%d",&peepfindval);
			peepval=peep(peepfindval);
			printf("%d",peepval);
			break;
			case 5:
			printf("Ener Position for Chnage element in stack:\n");
			scanf("%d",&peepfindval);
			printf("enter value for chnage:\n");
			scanf("%d",&value);
			change(peepfindval,value);

			break;
			default:{

			}
		}
	}
	
	return 0;
}