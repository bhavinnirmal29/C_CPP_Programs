//Linear search

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
		int n,a[100],temp,num,count=0,i,j;
		cout<<"How many numbers you want to enter?\n";
		cin>>n;
		cout<<"Enter "<<n<<" numbers\n";
		//Taking input from user
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"The numbers you entered are:\n";
		//Display numbers
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\n";
		}
		//Logic for ascending order
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		//Display of numbers in ascending order
		cout<<"The numbers in ascending order are \n";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\n";
		}
		cout<<"Which number you want to search?\n";
		cin>>num;
		//Logic for Linear search
		for(i=0;i<n;i++)
		{
			if(num==a[i])
			{
				cout<<"Number found\n";
				cout<<"Location is "<<i+1;
				break;
			}
			else if(num!=a[i])
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"Number not found\n";
		}
		cout<<"End of program\n";
	getch();
}






