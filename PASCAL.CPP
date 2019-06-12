#include<iostream.h>
#include<conio.h>
long calc(int n);
void main()
{
	clrscr();
	int i,j,k;
	cout<<"Pascals Triangle\n";
	int rows;
	cout<<"Enter number of rows\n";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(k=1;k<25-i-1;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{

		       cout<<" "<<(calc(i)/calc(j))*calc((i-j));
		}
		cout<<endl;
	}
	getch();
}
long calc(int num)
{
	int x;
	long res=1;
	for(x=1;x<=num;x++)
	{
		res=res*x;
	}
	return (res);

}
