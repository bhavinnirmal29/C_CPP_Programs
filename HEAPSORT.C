//Heap Sort
#include<stdio.h>
#include<conio.h>
void deletemax(int a[],int last);
void insert(int a[],int pos);
void heapsort(int a[]);
void adjust(int a[],int last);
int i,n,last,item,pos;
int a[20]={10,9,5,8,23,2,1,6,7,11};
void deletemax(int a[],int last)
{
	int x;
	x=a[1];
	a[1]=a[last];
	a[last]=x;
	adjust(a,last-1);
}
void insert(int a[],int pos)
{
	int i=pos,item=a[pos];
	while((i>1) && (a[i/2]<item))
	{
		a[i]=a[i/2];
		i=i/2;
	}
	a[i]=item;
}
void adjust(int a[],int n)
{
	int j=2;
	int item=a[1];
	while(j<=n)
	{
		if((j<n)&&(a[j]<a[j+1]))
		{
			j=j+1;
		}
		if(item>=a[j])
		{
			break;
		}
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=item;
}
void heapsort(int a[])
{
	int i;
	for(i=1;i<=9;i++)
	{
		insert(a,i);
	}
	for(i=9;i>=1;i--)
	{
		deletemax(a,i);
	}
}
void display(int a[])
{
	int i;
	for(i=1;i<=9;i++)
	{
		printf("%d  ",a[i]);
	}
}
void main()
{
	//,a[10],n=10;
/*	printf("Enter 10 elements : ");
	printf("\n");
	for(k=1;k<=n;k++)
	{
		scanf("%d",&a[k]);
	}
	*/
	clrscr();
	heapsort(a);
	printf("Elements are : \n ");
	display(a);
	getch();
}
