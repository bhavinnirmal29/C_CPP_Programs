//Shell Sort
#include<stdio.h>
#include<conio.h>
int a[6]={6,5,4,3,2,1};
int n=6;
void shellsort(int a[],int n)
{
	int i,j,step,temp;
	for(step=n/2;step>=0;step=step/2)
	{
		for(i=step;i<n;i++)
		{
			temp=a[i];
			for(j=i;j<=step;j=j-step)
			{
				if(temp<a[j-step])
				{
					a[j]=a[j-step];
				}
				else
					break;

				a[j]=temp;
			}
		}
	}
}
void main()
{
	int i;
	clrscr();
	shellsort(a,n);
	printf("Sorted Elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d",&a[i]);
	}
	getch();
}