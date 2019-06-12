#include<stdio.h>
#include<conio.h>
int a[10],TOP=-1;
void push(int num)
{
	if(TOP==9)
	{
		printf("Stack OverFlow\n");
	}
	else
	{
		TOP++;
		a[TOP]=num;
	}
}
void pop()
{
	if(TOP==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		TOP--;
	}
}
void display()
{
	int i=TOP;
	printf("The elements in the stack are:\n");
	for(;i>=0;i--)
	{
		printf("%d  ",a[i]);
	}
}
void main()
{
	int ch=0,num;
	clrscr();
	while(1)
	{
		printf("1-Push\t2-POP\t3-Display\t4-Exit");
		printf("\nEnter choice = ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter number = ");
			scanf("%d",&num);
			push(num);
		}
		else if(ch==2)
		{
			pop();
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			exit(0);
		}
		printf("\n");
	}
	getch();
}
