//Program for SUBSTITUTION CIPHER
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
//MAIN PROGRAM
void main()
{
	clrscr();
	int length,key,i;
	int binary1,binary2;
	char data[30];
	cout<<"Enter a plain text\n";
	gets(data);
	cout("Enter a key\n");
	cin>>key;
	length=strlen(data);
	for(i=0;i<length;i++)
	{
		if(data[i]==' ')
		{
		}
		else
		{
			if(data[i]>='x')
			{
				data[i]-=26;
			}
			data[i]+=key;
		}
	}
	cout<<"Encrypted cipher text is \n"<<data;
	for(i=0;i<length;i++)
	{
		if(data[i]==' ')
		{
		}
		else
		{
			if(data[i]<='a')
			{
				data[i]+=26;
			}
			data[i]-=key;
		}
	}
	cout<<"Decrypted cipher text"<<data;
	getch();
}
