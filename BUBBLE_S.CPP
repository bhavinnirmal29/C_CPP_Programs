// Bubble Sort
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,num[100],temp,k;
	int ptr=0;
	cout<<"How many numbers you want to enter\n";
	cin>>n;
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n-1;i++)
	{
		ptr=0;
	while(ptr<=(n-i))
	{
		if(num[ptr]>num[ptr+1])
		{
			temp=num[ptr];
			num[ptr]=num[ptr+1];
			num[ptr+1]=temp;
		}
		ptr=ptr+1;
		cout<<"Pass "<<i+1;
	}
	for(k=0;k<n;k++)
	{
		cout<<"\t"<<num[k]<<"\t";
	}
	cout<<endl;
	}
	getch();
}






