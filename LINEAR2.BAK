//Linear search

#include<iostream.h>
#include<conio.h>

//To display numbers

void display(int arr[],int size)
{
	int i;
	cout<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
}
//Logic for linear search
void linear(int arr[],int size,int num)
{
	int i,j,count=0;
	//Logic for Linear search
		for(i=0;i<size;i++)
		{
			if(num==arr[i])
			{
				cout<<"Number found\n";
				cout<<"Location is "<<i+1;
				cout<<endl;
				break;
			}
			else if(num!=arr[i])
			{
				count++;
			}
		}
		if(count==size)
		{
			cout<<"Number not found\n";
		}
		cout<<"End of program\n";
}

//Logic for ascending order

void ascending(int arr[],int size)
{
	int temp,i,j;
	for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				if(arr[i]<arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
}
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
		display(a,n);
		cout<<"The numbers in ascending order are:\n";
		ascending(a,n);
		display(a,n);
		cout<<"Which number you want to search?\n";
		cin>>num;
		linear(a,n,num);
	getch();
}
