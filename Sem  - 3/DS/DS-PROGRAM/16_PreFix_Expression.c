#include <stdio.h>
#include<string.h>
int stack[100],top=-1;
void push(int value)
{
	printf("Push Value=%d\n",value);
	top++;
	stack[top]=value;
}

int pop()
{
	top--;
	return stack[top+1];
}

int power(int a,int b){
	int power=1;
	for (int i = 0; i < b; ++i) 
	{
		power=power*a;
	}
}

int main()
{
	int length;
	char Expression[100],Expression1[100];
	printf("Enter Pre Fix Expression for Solve:\n");
	scanf("%s",Expression);

	for (int i = (strlen(Expression)-1); i>=0; --i)
	{
		if (isdigit(Expression[i]))
		{
			push(Expression[i]-'0');
		}
		else{
			int opn2=pop();
			int opn1=pop();
			if (Expression[i]=='+')
				push(opn1+opn2);
			else if (Expression[i]=='-')
				push(opn1-opn2);
			else if (Expression[i]=='*')
				push(opn1*opn2);
			else if (Expression[i]=='/')
				push(opn1/opn2);
			else if (Expression[i]=='^')
				push(power(opn1,opn2));
		}
	}
	printf("%d\n",stack[0]);
	return 0;
}