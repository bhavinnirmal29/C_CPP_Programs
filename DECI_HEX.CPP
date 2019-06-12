#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int decnum,rem,q;
	char hexdecnum[100];
	int i=1,j,temp;
	cout<<"Enter a number\n";
	cin>>decnum;
	q=decnum;
	while(q!=0)
	{
		temp=q%16;
		if(temp<10)
		{
			temp=temp+48;
		}
		else
		{
			temp=temp+55;
		}
		hexdecnum[i++]=temp;
		q=q/16;
	}
	cout<<"Hexadecimal= ";
	for(j=i-1;j>0;j--)
	{
		cout<<hexdecnum[j];
	}
	getch();
}