#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}queue;
queue *front=NULL,*rear=NULL,*newnode,*temp;
void enqueue(int num1)
{
	newnode = (queue*) malloc(sizeof(queue));
	newnode->data=num1;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		temp=front;
		front=front->next;
		free(temp);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		temp=front;
		printf("The elements are :\n");
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void main()
{
	clrscr();
	enqueue(5);
	enqueue(6);
	enqueue(7);
	display();
	dequeue();
	display();
	getch();
}


