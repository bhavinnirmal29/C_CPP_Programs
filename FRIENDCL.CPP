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
		friend class two;
	};

	class two
	{
		public:
		void display(one a1)
		{
			cout<<a1.x<<endl;
			cout<<a1.y;
		}
	};

	void main()
	{
		clrscr();
		one a1;
		two b1;
		a1.getdata();
		b1.display(a1);

		getch();
	}

