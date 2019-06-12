#include<stdio.h>
#include<conio.h>
int front=-1;
int rear=-1;
int num;
int a[10];
void enqueue(int num1)
{
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		a[front]=num1;
	}
	else
	{
		rear++;
		a[rear]=num1;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		if(front==0 && rear==0)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
}
void display()
{
	int i;
	if(front==-1 &&rear ==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The elements are :\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
void main()
{
	clrscr();
	enqueue(5);
	enqueue(6);
	enqueue(7);
	enqueue(8);
	display();
	dequeue();
	display();
	getch();
}