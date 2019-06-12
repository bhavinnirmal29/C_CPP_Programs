#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a[10],num,i;
	cout<<"How many numbers you want to enter?"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" numbers"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Which number you want to find?"<<endl;
	cin>>num;
	for(i=0;i<=n;i++)
	{
		if(num==a[i])
		{
			cout<<"Number found"<<endl;
			cout<<"Number is on "<<i+1<<"th position"<<endl;
		}
		else
		{
			cout<<"Number not found"<<endl;
			break;
		}
	}
	getch();
}
