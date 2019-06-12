#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,hash[11],key[11],n=11;
	clrscr();
	printf("Enter %d Elements : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&key[i]);
	}
	for(i=0;i<n;i++)
	{
		hash[i]=0;
	}
	i=0;
	while(i!=n)
	{
		j=key[i]%10;
		if(j==0)
		{
			hash[j]=key[i];
		}
		else
		{
			while(hash[j]!=0)
			{
				j=(j+1)%n;
			}
			hash[j]=key[i];
		}
		i++;
	}
	printf("Elements are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d = %d \n",i,hash[i]);
	}
	getch();
}