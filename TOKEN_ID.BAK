#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,n,token=1,beg=0,end,loc;
	int y;
	clrscr();
	printf("enter the string\n");

	gets(a);
	n=strlen(a);
	printf("string lenght is %d\n",n);
	printf("token=1\n");



	for(i=0;i<n;i++)
	{
		loc=i;
		if(a[i]!=' ')
		{
			printf("%c",a[i]);

		}
		if(a[i]==' '|| a[i+1]=='\0')
		{

			if((a[beg]>=65 && a[beg]<=91) || (a[beg]>=97 && a[loc]<=122))
			{
				printf("\tvariable");
				printf("\n");
			}
			if(a[beg]>='0' && a[beg]<='9' || a[beg]>=33 &&a[beg]<=47)
			{
				if(a[loc-1]>='0' && a[loc-1]<='9')

				{
					printf("\tliteral\n");


				}


				else if(a[loc-1]>=33 && a[loc-1]<=47)
				{
					printf("Symbols");
				}
				else
				{
					printf("Invalid\n");
				}
			}
			beg=loc+1;
			loc=i+1;
			if(i+1==n)
			{
				break;
			}
			token++;
			printf("\ntoken=%d\n",token);
		}

	}

	getch();

}
