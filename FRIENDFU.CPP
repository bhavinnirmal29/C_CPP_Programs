//Friend as a function

#include<iostream.h>
#include<conio.h>
	class two;	//Forward declaration
	class one
	{
		private:
		int x,y;
		public:
		void getdata()
		{
			cout<<"Enter two nos"<<endl;
			cin>>x>>y;
		}
		friend int add(one a1,two b1);
	};

	class two
	{
		private:
		int a,b;
		public:
		void input()
		{
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
		}
		friend int add(one a1,two b1);
	};

	int add(one a1,two b1)
	{
		return(a1.x+a1.y+b1.a+b1.b);
	}

	void main()
	{
		clrscr();
		one a1;
		two b1;
		a1.getdata();
		b1.input();

		cout<<"Addition = "<<add(a1,b1);
		getch();
	}

