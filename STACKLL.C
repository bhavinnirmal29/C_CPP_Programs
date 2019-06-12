#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}stack;
stack *TOP=NULL,*temp,*newnode;
void push(int num)
{
	newnode =(stack*) malloc(sizeof(stack));
	newnode->data=num;
	newnode->next=NULL;
	if(TOP==NULL)
	{
		TOP=newnode;
	}
	else
	{
		newnode->next=TOP;
		TOP=newnode;
	}
}
void pop()
{
	if(TOP==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		temp=TOP;
		TOP=temp->next;
		free(temp);
	}
}
void display()
{
	if(TOP==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		temp=TOP;
		printf("The Elements are :\n");
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}
}
void main()
{
	int ch,num;
	clrscr();
	while(1)
	{
		printf("\n1-Push\t2-POP\t3-Display\t4-Exit");
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
	}
	getch();
}