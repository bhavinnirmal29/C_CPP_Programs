#include<iostream.h>
#include<conio.h>
#include<string.h>
class encryption
{
	char input[100];
	char key[100];
	char buffer[100][20];
	char temp;
	char key_buff[100];
	int jmax;
	int tempk[100];
	int key_len;
	int in_len;
	public:
	encryption()
	{
		cout<<"Enter the plain text\n";
		cin.getline(input,100);
		cout<<"Enter the key\n";
		cin.getline(key,100);
		cout<<"Please wait while we encrypt\n";
		in_len=strlen(input);
		key_len=strlen(key);
		encrypt();
		display();
	}
	void encrypt();
	void display();
};
void encryption::encrypt()
{
	int i,j,k;
	strcpy(key_buff,key);

	for(i=0;i<key_len;i++)
	{
		if(key_buff[i]>='a'&&key_buff[i]<='z')
		{
			key_buff[i]=key_buff[i]-32;
		}
	}
	for(i=0;i<key_len;i++)
	{
		if(key[i]>='a'&&key[i]<='z')
		{
			key[i]=key[i]-32;
		}
	}
	for(i=0;i<key_len;i++)
	{
		for(j=0;j<i;j++)
		{
			if(key[j]>key[i])
			{
				temp=key[j];
				key[j]=key[i];
				key[i]=temp;
			}
		}
	}
	for(i=0;i<key_len;i++)
	{
		for(j=0;j<key_len;j++)
		{
			if(key_buff[j]==key[i])
			{
				tempk[i]=j;
			}
		}
	}
       /*	for(i=0;i<key_len;i++)
	{
		tempk[i]=key[i]-'A';
	}*/
	jmax=(in_len/key_len);
	if(jmax%key_len!=0)
	{
		jmax++;

	}
	k=0;
	for(i=0;i<key_len;i++)
	{
		for(j=0;j<jmax;j++)
		{
			if(k>in_len+11)
			{
				buffer[i][j]=' ';
			}
			else
			{
				buffer[i][j]=input[k];
				k++;
			}
		}

	}
}
void encryption::display()
{
	cout<<"Encryted Version : \n ";
	for(int i=0;i<key_len;i++)
	{
		for(int j=0;j<jmax;j++)
		{
			cout<<buffer[j][tempk[i]]<<"";
		}
	}
}
void main()
{
	clrscr();
	encryption transpose;
	getch();
}