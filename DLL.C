//DLL
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
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
	struct node *flink;
	struct node *rlink;
}*LIST=NULL,*p,*q;
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("1.Add_Beg 2.Del_Beg 3.Display 4.Exit 5.Add_Bet 6.Del_Bet 7.Add_End 8.Del_End\n");
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
	q=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data : ");
	scanf("%d",&a);
	q->data=a;
	q->rlink=NULL;
	q->flink=LIST;
	LIST->rlink=q;
	LIST=q;
}
void delete_()
{
	if(LIST==NULL)
	{
		printf("\nUNDERFLOW\n");
	}
	else
	{
		q=LIST;
		LIST=LIST->flink;
		q->flink=NULL;
		free(q);
	}
}
void display()
{
	p=LIST;
	printf("Elements are :\n ");
	if(LIST==NULL)
	{
		printf("LIST is empty\n");
	}
	else
	{
		while(p)
		{
			printf("%d-->",p->data);
			p=p->flink;
		}
		printf("\n");
	}
}
void add_bet()
{
	int pos,i,a;
	q=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data : ");
	scanf("%d",&a);
	printf("\nEnter Position : ");
	scanf("%d",&pos);
	q->data=a;
	p=LIST;
	for(i=1;i<pos-1;i++)
	{
		p=p->flink;
	}
	q->flink=p->flink;
	q->rlink=p;
	p->flink=q;
	p->flink->rlink=q;
}
void del_bet()
{
	int pos,i;
	if(LIST==NULL)
	{
		printf("\nUNDERFLOW\n");
		goto z;
	}
	printf("Enter Position : ");
	scanf("%d",&pos);
	p=LIST;
	q=(struct node*)malloc(sizeof(struct node));
	for(i=1;i<pos-1;i++)
	{
		p=p->flink;
	}
	q=p->flink;
	p->flink=q->flink;
	q->flink->rlink=p;
	free(q);
	z:
}
void add_end()
{
	int a;
	q=(struct node*)malloc(sizeof(struct node));
	if(LIST==NULL)
	{
		printf("\nUNDERFLOW\n");
		goto z_;
	}
	printf("\nEnter Data : ");
	scanf("%d",&a);
	q->data=a;
	q->flink=NULL;
	p=LIST;
	while(p->flink!=NULL)
	{
		p=p->flink;
	}
	p->flink=q;
	q->rlink=p;
	z_:
}
void del_end()
{
	if(LIST==NULL)
	{
		printf("\nUNDERFLOW\n");
		goto y;
	}
	else if(LIST->flink==NULL)
	{
		q=LIST;
		q->rlink->flink=NULL;
		free(LIST);
		goto y;
	}
	p=LIST;
	while(p->flink!=NULL)
	{
		p=p->flink;
	}
	p->rlink->flink=NULL;
	free(p);
	y:
}

