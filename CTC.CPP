//Columnar Transposition
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	clrscr();
	char plain[50],key[50]={'c','o','n','s','u','l','t'};
	int asc_key[50]={'c','o','n','s','u','l','t'};
	int i,j,key_length,length;
	int temp;
	char consult[40][40];
	cout<<"Enter A Plain Text "<<endl;
	cin>>plain;
	length=strlen(plain);
	cout<<"Key =  "<<key<<endl;
	key_length=strlen(key);
	for(i=0;i<key_length;i++)
	{
		for(j=0;j<key_length;j++)
		{
			if((int)asc_key[i]<(int)asc_key[j])
			{
				temp=asc_key[i];
				asc_key[i]=asc_key[j];
				asc_key[j]=temp;
			}
		}

	}
	for(i=0;i<key_length;i++)
	{
		cout<<(char)key[i]<<"  ";
	}
	cout<<endl;
	int count=0;
	for(i=0;i<key_length;i++)
	{
		for(j=0;j<key_length;j++)
		{
			consult[i][j]=plain[count];
			count++;
			if(count==length)
			{
				break;
			}
		}
		if(plain[count]=='\0')
		{
			break;
		}
	}
	int count1=0;
	for(i=0;i<key_length;i++)
	{
		for(j=0;j<key_length;j++)
		{
			cout<<consult[i][j]<<"  ";
			count1++;
		}
		if(plain[count1]=='\0')
		{
			break;
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Encryption : ";
	int count2=0;
	for(i=0;i<key_length;i++)
	{
		for(j=0;j<key_length;j++)
		{
			cout<<consult[j][i]<<"";
			count2++;
		}
		if(count2==length)
		{
			break;
		}
	}
	getch();
}