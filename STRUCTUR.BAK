#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	char name[20];
	int age;
	int id_no;
	long int salary;
};

void main()
{
	employee E1[3];
	clrscr();
	int i;
	//Input

	for(i=0;i<3;i++)
	{
		cout<<"Enter employee name"<<endl;
		gets(E1[i].name);
		cout<<"Enter age"<<endl;
		cin>>E1[i].age;
		cout<<"Enter id number"<<endl;
		cin>>E1[i].id_no;
		cout<<"Enter salary"<<endl;
		cin>>E1[i].salary;
	}
	cout<<endl<<endl;
	//display
	cout<<"Employee Name\tAge\tId Number\tSalary\t"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<E1[i].name<<"\t\t"<<E1[i].age<<"\t"<<E1[i].id_no<<"\t\t"<<E1[i].salary<<endl;
	}
	getch();
}


