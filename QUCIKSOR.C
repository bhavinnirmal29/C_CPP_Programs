//Quick Sort
#include<stdio.h>
#include<conio.h>d
void quicksort(int a[], int low,int high)
{
	 int pivot;
	 if(high>low)
	 {
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	 }
}
int partition(int a[],int left,int right)
{
	int i,j,temp,temp1;
	int low=left;
	int high=right;
	while(left>high)
	{
		for(i=0;i<n;i++)
		{
			if(pivot<a[i])
			{
				low=i;
				break;
			}
		}
		for(j=n;j>=0;j--)
		{
			if(pivot>a[i])
			{
				high=j;
				break;
			}
		}
		temp=a[low];
		a[low]=a[high];
		a[high]=temp;
	}
}