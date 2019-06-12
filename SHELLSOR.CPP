//Shell Sort

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,j,i,num[100],temp,k,d;
	cout<<"How many numbers you want to enter\n";
	cin>>n;
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	d=n;
	i=0;
	for(i=0;i<n;i++)
	{
		d=(d+1)/2;
		for(j=0;j<n-d;j++)
		{
			if(d!=0)
			{
				if(num[j]>num[d+j])
				{
					temp=num[j];
					num[j]=num[j+d];
					num[j+d]=temp;
				}
			}
		}
		cout<<"Pass "<<i+1;


		for(k=0;k<n;k++)
		{
			cout<<"\t"<<num[k]<<"\t";
		}
		cout<<endl;
	}
	getch();
}

