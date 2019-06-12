//Shell Sort

#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],a,n,temp,count;
	int i,d,j;
	clrscr();
	printf("How many numbers you want to enter?\n");
	scanf("%d",&n);
	printf("Enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("The numbers in ascending order using shell sort are :\n");
	//Shell Sort

	d=(n+1)/2;
	for(d=n/2;d>0;d/=2)
	{
		for(j=d;j<n;j++)
		{
			for(i=j-d;i>=0;i-=d)
			{
				if(num[i+d]>=num[i])
				{
					break;
				}
				else
				{
					temp=num[i];
					num[i]=num[i+d];
					num[i+d]=temp;
				}
			}
		}
		printf("\nGap = %d\n",d);
		for(i=0;i<n;i++)
		{
			printf("%d",num[i]);
			printf("\t");
		}
	}
	getch();
}