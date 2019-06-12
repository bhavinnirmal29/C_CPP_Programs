#include<conio.h>
#include<iostream.h>
#include<string.h>
class encryption
{
	char input[100];
	char key[20];
	char tempkey;
	int in_len;
	int key_len;
	int xor;
	public:
	char cipher[100];
	encryption()
	{
		cout<<"Enter the text\n";
		cin.getline(input,100);
		cout<<"Enter the key\n";
		cin.getline(key,20);
		cout<<"Please wait while we encryption\n";
		encrypt();
		display();
	}
	void encrypt();
	void display();

};
void encryption::encrypt()
{
	int i=0,j=0;
	in_len=strlen(input);
	key_len=strlen(key);
	for(i=0;i<in_len;i++)
	{
		if(input[i]>='a'&&input[i]<='z')
		{
			input[i]-=32;
		}
	}
	for(i=0;i<key_len;i++)
	{
		if(key[i]>='a'&&key[i]<='z')
		{
			key[i]-=32;
		}
	}
	j=0;
	for(i=0;i<in_len;i++)
	{
		if(j>key_len-1)
		{
			j=0;
		}
		if(input[i]>='A')
		{
			tempkey=key[j];
			j++;
			xor=(input[i]-(64))^(tempkey-(64));
			xor=xor%26;
			cipher[i]=xor+(64);
		}
		else
		{
			cipher[i]=input[i];
		}

	}

}
void encryption::display()
{
	int i=0;
	for(i=0;i<in_len;i++)
	{
		cout<<cipher[i];
	}
}
void main()
{
	clrscr();
	encryption caesar;
	encryption caesar2;
	getch();
}