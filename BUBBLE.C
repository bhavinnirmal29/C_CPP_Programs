// Bubble Sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,num[100],temp,k=1;
	int ptr=0;
	clrscr();
	printf("How many numbers you want to enter\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		ptr=0;
		while(ptr<(n-1))
		{
			if(num[ptr]>num[ptr+1])
			{
				temp=num[ptr];
				num[ptr]=num[ptr+1];
				num[ptr+1]=temp;
			}
			ptr=ptr+1;
		}
		printf("Pass %d : ",i+1);
		for(k=0;k<n;k++)
		{
			printf("%d\t",num[k]);
		}
		printf("\n");
	}
	getch();
}






