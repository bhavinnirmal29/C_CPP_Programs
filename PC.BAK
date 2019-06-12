#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void producer();
void consumer();
void display();
int stack[3];
int buffer[3];
int top=-1,i;
void main()
{
	clrscr();
	int ch=0;
	while(ch>=0)
	{
		cout<<"1- Produce\n2- Consume\n3- Exit\n";
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<endl;
		if(ch==1)
			producer();
		else if(ch==2)
			consumer();
		else if(ch==3)
			exit(0);
		else
			cout<<"Invalid Input\n";
		cout<<"After Choice Buffer : \n";
		display();
		cout<<endl;
	}
	getch();
}
void producer()
{
	if(top==2)
	{
		cout<<"Buffer is Full\n";
	}
	else
	{
		cout<<"Enter Data : ";
		cin>>i;
		top++;
		stack[top]=i;
		buffer[top]=stack[top];
		cout<<"Produce : "<<stack[top];
		cout<<endl;
	}
}
void consumer()
{
	if(top<0)
	{
		cout<<"Buffer is Empty\n";
	}
	else
	{
		cout<<"Consumed: "<<stack[top];
		top--;
		buffer[top]=stack[top];
		cout<<endl;
	}
}
void display()
{
	for(int k=0;k<=top;k++)
	{
		cout<<buffer[k]<<"\t";
	}
}

