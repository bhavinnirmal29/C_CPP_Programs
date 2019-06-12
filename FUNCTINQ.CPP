//MATHEMATICS QUIZ PROGRAM

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
char option;
int points=0;
int count=0;
void rules()
{
	cout<<"There are some rules to play this game"<<endl<<endl;
	cout<<"They are as follows:"<<endl<<endl;
	cout<<"There will be 10 questions."<<endl<<endl;
	cout<<"Each question will have 2 options"<<endl<<endl;
	cout<<"You will earn 10 points for your every right answer."<<endl<<endl;
	cout<<"If you give a wrong answer then  your game will end and the final result will be displayed."<<endl<<endl;
	cout<<"Lets start the game"<<endl<<endl;
	getch();
}
void q1()
{
	cout<<"1...Which is the correct distance formula from the below options"<<endl<<endl;
		cout<<"A=sqrt(pow(x2-x1,2))+(pow(y2-y1,2))"<<endl<<endl;
		cout<<"B=sqrt(pow(x2-x1))+(pow(y2+y1))"<<endl<<endl;
		cout<<"Enter your option"<<endl<<endl;
		cin>>option;
		if(option=='a'||option=='A')
		{
			cout<<"Congrats..your answer is right"<<endl<<endl;
			cout<<"You won 10 points"<<endl<<endl;
			points+=10;
			count++;
			getch();
		}
		else
		{
			cout<<"Your answer is wrong"<<endl<<endl;
			cout<<"Better luck next time....:("<<endl<<endl;
			cout<<"Bye..."<<endl<<endl;
		}
		clrscr();
}
void main()
{
	clrscr();

	char a[50];
	cout<<"WELCOME TO MATHEMATICS QUIZ"<<endl<<endl;
	rules();
	cout<<"Enter your name"<<endl<<endl;
	gets(a);
	cout<<"Lets Start..:)"<<endl<<endl;
	clrscr();
	int z;
	cout<<"Press any Number to start"<<endl<<endl;
	cin>>z;
	clrscr();
	q1();
	getch();
}




