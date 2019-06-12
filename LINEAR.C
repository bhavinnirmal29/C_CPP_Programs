//Linear Search
#include<stdio.h>
#include<conio.h>
int l_search(int a[],int key,int n)
{
	int flag=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
		else
		{
			continue;
		}
	}
	if(flag==0)
	{
		return printf("\nElement not found");
	}
	else
	{
		return printf("\nElement found at Location : %d",i+1);
	}
}
void main()
{
	int a[10];
	int n,i,key;
	clrscr();
	printf("How many nos you want to enter ? \n");
	scanf("%d",&n);
	printf("\nEnter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter element to be searched : ");
	scanf("%d",&key);
	l_search(a,key,n);
	getch();
}
