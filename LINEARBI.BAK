//Linear search and binary search

#include<iostream.h>
#include<conio.h>

//To display numbers

void display(int arr[],int size)
{
	int i;
	cout<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
//Logic for binary search
void binary(int arr[],int size)
{
	int beg=0,end=size,mid,count=0,num;
	cout<<"Which number you want to search?\n";
	cin>>num;
	mid=(beg+end)/2;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==num)
		{
			count++;
			break;
		}
		else if(arr[mid]<num)
		{
			beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	if(count==1)
	{
		cout<<"Number found\n";
		cout<<"The location is "<<mid+1<<endl;
	}
	else
	{
		cout<<"Number not found\n";
	}
}
//Logic for linear search
void linear(int arr[],int size)
{
	int i,j,count=0,num;
	cout<<"Which number you want to search?\n";
	cin>>num;
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
		int n,a[100],temp,num,count=0,i,j,choice;
		cout<<"Which search you want to peroform?\n";
		cout<<"1.Linear search\n";
		cout<<"2.Binary search\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		if(choice<1 || choice>2)
		{
			goto jump;
		}
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
		switch(choice)
		{
			case 1:
			{
				linear(a,n);
				break;
			}
			case 2:
			{
				binary(a,n);
				break;
			}
			default:
			{
				jump:
				cout<<"Inavlid input";
			}
		}


	getch();
}