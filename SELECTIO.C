//Selection Sort
#include<stdio.h>
#include<conio.h>
int count=0;
void selection(int a[], int n)
{
	int i=0,pos,temp;
//	int l=0;
	for(i=0;i<n;i++)
	{
		pos=smallest(a,i,n);
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}
int smallest(int a[],int k,int n)
{
	int pos=k,j;
	int small=a[k];
	for(j=k+1;j<n;j++)
	{
		if(a[j]<small)
		{
			small=a[j];
			pos=j;
		}
	}
	return pos;
}
void main()
{
	int a[10],n;
	int i,j;
	clrscr();
	printf("How many numbers you want to enter ?\n");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	printf("The sorted elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}


