//Binary search

#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],n,temp;
	int a,start=1,end,mid,flag=0;
	int i,j;
	clrscr();
	printf("How many numbers you want to enter?\n");
	scanf("%d",&n);
	end=n;
	printf("Enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("The numbers in ascending order are::\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
		printf("\n");
	}
	mid=(start+end)/2;
	printf("MID= %d",mid);
	printf("\nWhich number you want to find?\n");
	scanf("%d",&a);
	while(start<=end)
	{
		mid=(start+end)/2;
		if(num[mid]==a)
		{
			flag++;
			break;
		}
		else if(num[mid]<a)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	if(flag==1)
	{
		printf("Location = %d ",mid+1);
	}
	else
	{
		printf("Number not found\n");
	}
	getch();
}

