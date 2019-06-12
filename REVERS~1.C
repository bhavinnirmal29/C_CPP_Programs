#include<stdio.h>
#include<conio.h>
#include<alloc.h>
static void reverse(struct node** head_ref);
void add_beg();
struct node
{
	int data;
	struct node *link;
}*LIST=NULL,*p,*q;
static void reverse(struct node** head_ref)
{
    struct node* prev   = NULL;
    struct node* current = *head_ref;
    struct node* next;
    while (current != NULL)
    {
	next  = current->link;
	current->link = prev;
	prev = current;
	current = next;
    }
    *head_ref = prev;
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
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("1.Add_Beg 2.Reverse 3-Display 4-Exit\n");
		printf("ENTER THE CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add_beg();
				break;
			case 2:
				reverse(&LIST);
				break;
			case 3:
				display();
				break;
		}
	}while(ch!=4);
	getch();
}