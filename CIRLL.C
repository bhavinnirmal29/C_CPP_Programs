#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct Node
{
	int info;
	struct Node *next;
}node;
node *front=NULL,*rear=NULL,*temp;
void create();
void del();
void display();
void main()
{
	int chc;
	clrscr();
	do
	{
		printf("\n1-Enqueue  2-Dequeue  3-Display  4-Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&chc);
		switch(chc)
		{
			case 1:
				create();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				return 1;
			default:
				printf("\nInvalid choice :");
		}
	}while(1);
}

void create()
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("Enter Data : ");
	scanf("%d",&newnode->info);
	newnode->next=NULL;
	if(rear==NULL)
		front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	rear->next=front;
}
void del()
{
	temp=front;
	if(front==NULL)
		printf("\nUnderflow :");
	else
	{
		if(front==rear)
		{
			printf("\n%d Deleted\n",front->info);
			front=rear=NULL;
		}
		else
		{
			printf("\n%d Deleted\n",front->info);
			front=front->next;
			rear->next=front;
		}
		temp->next=NULL;
		free(temp);
	}
}
void display()
{
    temp=front;
    if(front==NULL)
	printf("\nEmpty");
    else
    {
	printf("The Elements are : \n");
	for(;temp!=rear;temp=temp->next)
	    printf("%d--> ",temp->info);
	    printf("%d--> ",temp->info);
    }
}