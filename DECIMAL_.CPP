#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,bin=0,tens=1;
	cout<<"Enter the number\n";
	cin>>num;
	while(num>0)
	{
		bin=bin+(num%2)*tens;
		num=num/2;
		tens*=10;
	}
	cout<<"Binary= "<<bin;
	getch();
}