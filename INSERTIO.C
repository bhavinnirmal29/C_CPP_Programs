//Insertion Sort
#include<stdio.h>
#include<conio.h>
int a[10],n;
void insertion(int a[],int n)
{
	int i,temp,j,temp1;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
void main()
{
	int i;
	clrscr();
	printf("How many numbers you want to enter?\n");
	scanf("%d",&n);
	printf("Enter %d numbers :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	printf("\nThe sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
