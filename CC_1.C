#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char array[100], cipher[100];
    int c=0, x=0, y=0;
    int z;
    clrscr();
    printf("This Program will encrypt according to your needs\n");
    printf("Enter the cipher key\n");
    scanf("%d",&z);
    printf("Enter the sentence \n");
    do
    {
	c=getchar();
	array[x++]=(char)c;
	cipher[y++]=(char)(c+z);
    }while((c=getchar()) !='\n');

    array[x]=0;
    cipher[y]=0;

    printf("%s\n",cipher);
	getch();
}