#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,a[100],input;
	cout<<"How many numbers you want to enter?"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" numbers"<<endl;
	for(i=0;i<n;i++)
	{
	     cin>>a[i];
	}
	cout<<"Enter input"<<endl;
	cin>>input;
	for(i=0;i<n;i++)
	{


	    if(input==a[i])
	    {
		cout<<"Number is in the series"<<endl;
	    }
	       if(input!=a[i])
	       {
		 cout<<"Number is not in the series"<<endl;
	       }
	       else
	       {
	       }
	}
	getch();
}