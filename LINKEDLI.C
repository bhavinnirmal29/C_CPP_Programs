#include<stdio.h>
#include<conio.h>
#include<alloc.h>
static void reverse(struct node** head_ref);
void add_beg();
void delete_();
void display();
void add_bet();
void del_bet();
void add_end();
void del_end();
struct node
{
	int data;
	struct node *link;
}*LIST=NULL,*p,*q;
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("1.Add_Beg 2.Del_Beg 3.Display 4.Exit  5.Add_Bet 6.Del_Bet 7.Add_End 8.Del_End\n");
		printf("ENTER THE CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add_beg();
				break;
			case 2:
				delete_();
				break;
			case 3:
				display();
				break;
			case 5:
				add_bet();
				break;
			case 6:
				del_bet();
				break;
			case 7:
				add_end();
				break;
			case 8:
				del_end();
				break;
		}
	}while(ch!=4);
	getch();
}
void add_beg()
{
	int a;
	q=malloc(sizeof(struct node));
	printf("Enter Data :");
	scanf("%d",&a);
	q->data=a;
	if(LIST==NULL)
	{
		LIST=q;
		q->link=NULL;

	}
	else
	{
		q->link=LIST;
		LIST=q;
	}
}
void delete_()
{
	if(LIST==NULL)
	{
		printf("UNDERFLOW");
	}
	else
	{
		q=LIST;
		LIST=LIST->link;
		free(q);
	}
}
void display()
{
	p=LIST;
	while(p)
	{
		printf("%d-->",p->data);
		p=p->link;
	}
	printf("\n");
}

void add_bet()
{
	int pos;
	int a,i,t;
	q=malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&a);
	q->data=a;
	printf("Enter Position :");
	scanf("%d",&pos);
	p=LIST;
	for(i=0;i<pos-1;i++)
	{
	p=p->link;
	}
	q->link=p->link;
	p->link=q;
}
void del_bet()
{
	int pos,i;
	printf("Enter the position for deleting the node:");
	scanf("%d",&pos);
	p=LIST;
	for(i=0;i<pos-1;i++)
	{
		p=p->link;
	}
	printf("%d is deleted",p->link->data);
	p->link=p->link->link;
}
void add_end()
{
	q=(struct node*)malloc (sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&q->data);
	q->link=NULL;
	if(LIST==NULL)
	{
		LIST=q;
	}
	else
	{
		p=LIST;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=q;

	}
}
void del_end()
{
	int temp;
	if(LIST==NULL)
	{
		printf("No item");
	}
	else
	{
		if(LIST->link!=NULL)
		{
		p=LIST;
		while(p->link->link!=NULL)
		{
			p=p->link;
		}


		printf("%d deleted\n",p->link->data);
		p->link=NULL;
		free(p->link->link);
		}
		else if(LIST->link==NULL)
		{
			printf("%d deleted\n",LIST->data);
			LIST=NULL;
			free(LIST);
		}

	}
}






