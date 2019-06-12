#include<stdio.h>
#include<conio.h>
#include<string.h>
int top=-1;
char stack[10];
char str[10];
void push(char item)
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
char pop()
{
	if(top==10)
	{
		printf("Stack is Full\n");
	}
	else
	{
		top--;
	}
	return stack[top];
}
void main()
{
	char temp;
	int i,flag=1,j=0;
	clrscr();
	printf("Enter String :");
	gets(str);
	printf("\nString : %s",stack);
	while(str[j]!='\0')
		j++;
		for(i=0;i<j;i++)
		{
			if(str[i]=='{' || str[i]=='[' || str[i]=='(')
			{
				push(str[i]);
			}
			if(str[i]==')' || str[i]=='}' ||str[i] ==']')
			{
				if(top==-1)
				{
					flag=0;
				}
				else
				{
					temp=pop();
					if((str[i]==')')&&(temp=='{'||temp=='['))
						flag=0;
					if((str[i]=='}')&&(temp=='['||temp=='('))
						flag=0;
					if((str[i]==']')&&(temp=='('||temp=='{'))
						flag=0;
				}
			}
		}

		if(top>0)
			flag=0;
		if(flag==1)
			printf("True\n");
		else
			printf("\nFalse\n");
	getch();
}


