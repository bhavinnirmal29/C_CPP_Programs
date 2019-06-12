#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a[5],i;
	cout<<"How many numbers you want to sort"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" numbers"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j,temp;
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
	cout<<"The numbers in ascending order are"<<endl;
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<endl;
	}
	getch();
}
