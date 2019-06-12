//College database

#include<iostream.h>
#include<conio.h>
int input;
class college_database
{
	public:
	void student()
	{
		cout<<"WELCOME TO SBMP STUDENT DATA\n\n\n";
		cout<<"Enter 3 to exit\n\n";

	}
	void s1()
	{
		cout<<"Student name: Bhavin Nirmal\n"<<endl;
		cout<<"Studnet ID:12345\n"<<endl;
		cout<<"Email-Id:bhavinnirmal29@gmail.com"<<endl;
		cout<<"Marks for Three Subjects\n\n";
		cout<<"ENGLISH\t\tPHYSICS\t\tMATHEMATICS\n\n";
		cout<<"  67   \t\t  75   \t\t    88      \n\n";
		cout<<"STUDENT PERSONAL INFORMATION\n\n";
	}
};

void main()
{
	clrscr();
	college_database c1;
	char choice;
	c1.student();
	cout<<"Which student information you want to find?\n\n"<<endl;
	cout<<"STUDENT 1\nSTUDENT 2\nSTUDENT 3\n\n";
	do
	{
	cout<<"ENTER ROLL NUMBER OF STUDENT YOU WANT FIND INFORMATION ON\n\n";
	cin>>input;
		if(input==1)
		{
			c1.s1();
		}
		else if(input==3)
		{
			break;
		}
		else
		{
		}
		cout<<"Do you want to find again?\n\n";
		cout<<"To find press 'Y' or 'y'\n\n"<<endl;
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	getch();
}






