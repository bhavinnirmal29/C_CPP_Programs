#include<stdio.h>
#include<conio.h>
int front=-1;
int rear=-1;
int num;
int a[10];
void enqueue(int num1)
{
	if(front==-1 )
	{
		front=rear=0;
		a[front]=num1;
	}
	else
	{
		rear=(rear+1)%10;
		a[rear]=num1;
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%10;
		}
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("\nThe elements are :\n");
		if(rear<front)
		{
			for(i=front;i<=9;i++)
				printf("%d\t",a[i]);
			for(i=0;i<=rear;i++)
				printf("%d\t",a[i]);
		}
		else
		{
			for(i=front;i<=rear;i++)
				printf("%d\t",a[i]);
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
	enqueue(55);
	enqueue(66);
	enqueue(77);
	enqueue(88);
	enqueue(56);
	display();
	dequeue();
	dequeue();
	enqueue(67);
	enqueue(78);
	enqueue(89);
	display();
	getch();
}