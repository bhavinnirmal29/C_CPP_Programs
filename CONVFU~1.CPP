//		CODE CONVERSION WITH MULTIPLE FUNCTIONS
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
//DECLARATION OF FUNCTIONS
void displayArray(char arr[]);
void displayReverseArray(char arr[]);
void checkBase(int num,int nbase,int cbase);
void checkHexaBase(char hex[],int cbase);
int binaryToOctal(int num);
int binaryToDecimal(int num);
void binaryToHexadecimal(int num,char hex[]);
int octalToBinary(int num);
int octalToDecimal(int num);
void octalToHexadecimal(int num,char hex[]);
int decimalToBinary(int num);
int decimalToOctal(int num);
void decimalToHexadecimal(int num,char hex[]);
int hexadecimalToBinary(char hex[]);
int hexadecimalToOctal(char hex[]);
int hexadecimalToDecimal(char hex[]);

void displayArray(char arr[])
{
	int i,size;
	i=0;
	while(arr[i++]!='\0'){}
	size=i-1;
	for(i=size-1;i>=0;i--)
	{
		cout<<arr[i];
	}
}

void displayReverseArray(char arr[])
{
	int i,size;
	i=0;
	while(arr[i++]!='\0'){}
	size=i-1;
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}

//Function to check the input number's base and output number's base and call the codeConversion function with appropriate parameters and print output
void checkBase(int num,int nbase,int cbase)
{
	int bina,octa,deca;
	char hexa[20];
	switch(nbase)
	{
		case 2:
				switch(cbase)
				{
					case 1:
							octa=binaryToOctal(num);
							cout<<"Binary["<<num<<"]= Octal["<<octa<<"]\n";
							deca=binaryToDecimal(num);
							cout<<"\tBinary["<<num<<"]= Decimal["<<deca<<"]\n";
							binaryToHexadecimal(num,hexa);
							cout<<"\tBinary["<<num<<"]= Hexadecimal[";
							displayArray(hexa);
							cout<<"]\n";
							break;
					case 8:
							octa=binaryToOctal(num);
							cout<<"Binary["<<num<<"]= Octal["<<octa<<"]\n";
							break;
					case 10:
							deca=binaryToDecimal(num);
							cout<<"Binary["<<num<<"]= Decimal["<<deca<<"]\n";
							break;
					case 16:
							binaryToHexadecimal(num,hexa);
							cout<<"Binary["<<num<<"]= Hexadecimal[";
							displayArray(hexa);
							cout<<"]\n";
							break;
					default:
							cout<<"\nInvalid converting base\n";
							break;
				}
				break;
		case 8:
				switch(cbase)
				{
					case 1:
							bina=octalToBinary(num);
							cout<<"Octal["<<num<<"]= Binary["<<bina<<"]\n";
							deca=octalToDecimal(num);
							cout<<"\tOctal["<<num<<"]= Decimal["<<deca<<"]\n";
							octalToHexadecimal(num,hexa);
							cout<<"\tOctal["<<num<<"]= Hexadecimal[";
							displayArray(hexa);
							cout<<"]\n";
							break;
					case 2:
							bina=octalToBinary(num);
							cout<<"Octal["<<num<<"]= Binary["<<bina<<"]\n";
							break;
					case 10:
							deca=octalToDecimal(num);
							cout<<"Octal["<<num<<"]= Decimal["<<deca<<"]\n";
							break;
					case 16:
							octalToHexadecimal(num,hexa);
							cout<<"Octal["<<num<<"]= Hexadecimal[";
							displayArray(hexa);
							cout<<"]\n";
							break;
					default:
							cout<<"\nInvalid converting base\n";
							break;
				}
				break;
		case 10:
				switch(cbase)
				{
					case 1:
							bina=decimalToBinary(num);
							cout<<"Decimal["<<num<<"]= Binary["<<bina<<"]\n";
							octa=decimalToOctal(num);
							cout<<"\tDecimal["<<num<<"]= Octal["<<octa<<"]\n";
							decimalToHexadecimal(num,hexa);
							cout<<"\tDecimal["<<num<<"]= Hexadecimal[";
							displayArray(hexa);
							cout<<"]\n";
							break;
					case 2:
							bina=decimalToBinary(num);
							cout<<"Decimal["<<num<<"]= Binary["<<bina<<"]\n";
							break;
					case 8:
							octa=decimalToOctal(num);
							cout<<"Decimal["<<num<<"]= Octal["<<octa<<"]\n";
							break;
					case 16:
							decimalToHexadecimal(num,hexa);
							cout<<"Decimal["<<num<<"]= Hexadecimal[";
							displayArray(hexa);
							cout<<"]\n";
							break;
					default:
							cout<<"\nInvalid converting base\n";
							break;
				}
				break;
		default:
				cout<<"\nInvalid base\n";
				break;
	}
}

void checkHexaBase(char hex[],int cbase)
{
	int bina,octa,deca;
	switch(cbase)
	{
		case 1:
				bina=hexadecimalToBinary(hex);
				cout<<"Hexadecimal[";
				displayReverseArray(hex);
				cout<<"]= Binary["<<bina<<"]\n";
				octa=hexadecimalToOctal(hex);
				cout<<"\tHexadecimal[";
				displayReverseArray(hex);
				cout<<"]= Octal["<<octa<<"]\n";
				deca=hexadecimalToDecimal(hex);
				cout<<"\tHexadecimal[";
				displayReverseArray(hex);
				cout<<"]= Decimal["<<deca<<"]\n";
				break;
		case 2:
				bina=hexadecimalToBinary(hex);
				cout<<"Hexadecimal[";
				displayReverseArray(hex);
				cout<<"]= Binary["<<bina<<"]\n";
				break;
		case 8:
				octa=hexadecimalToOctal(hex);
				cout<<"Hexadecimal[";
				displayReverseArray(hex);
				cout<<"]= Octal["<<octa<<"]\n";
				break;
		case 10:
				deca=hexadecimalToDecimal(hex);
				cout<<"Hexadecimal[";
				displayReverseArray(hex);
				cout<<"]= Decimal["<<deca<<"]\n";
				break;
		default:
				cout<<"\nInvalid converting base\n";
				break;
	}
}

int binaryToOctal(int num)
{
	int binnum,octnum,binlength,bingroups,bintemp,i,bintens,octtens,decnum;
//Find out length of the binary number
	binnum=num;
	binlength=0;
	while(binnum>0)
	{
		binlength++;
		binnum/=10;
	}
//Find out how many groups of 3 can be formed
	binnum=num;
	bingroups=binlength/3;
	if((binlength%3)!=0)
	{
		bingroups++;
	}
//Select numbers group-wise and evaluate the decimal equivalent and add to the octal number
	octnum=0;
	octtens=1;
	while(bingroups)
	{
		bintemp=0;
		bintens=1;
		for(i=0;i<3;i++)
		{
			bintemp+=((binnum%10)*bintens);
			binnum/=10;
			bintens*=10;
		}
		decnum=binaryToDecimal(bintemp);
		octnum+=decnum*octtens;
		octtens*=10;
		bingroups--;
	}
	return octnum;
}

int binaryToDecimal(int num)
{
	int decnum,power,binnum;
	binnum=num;
	decnum=0;
	power=0;
	while(binnum)
	{
		decnum+=(pow(2,power)*(binnum%10));
		power++;
		binnum/=10;
	}
	return decnum;
}

void binaryToHexadecimal(int num,char hex[])
{
	int binnum,binlength,bingroups,bintemp,i,bintens,hexdigit,decnum;
//Find out length of the binary number
	binlength=0;
	binnum=num;
	while(binnum>0)
	{
		binlength++;
		binnum/=10;
	}
//Find out how many groups of 4 can be formed
	binnum=num;
	bingroups=binlength/4;
	if((binlength%4)!=0)
	{
		bingroups++;
	}
//Select numbers group-wise and evaluate the decimal equivalent and add to the octal number
	hexdigit=0;
	while(bingroups)
	{
		bintemp=0;
		bintens=1;
		for(i=0;i<4;i++)
		{
			bintemp+=((binnum%10)*bintens);
			binnum/=10;
			bintens*=10;
		}
		decnum=binaryToDecimal(bintemp);
		if(decnum>9)
		{
			hex[hexdigit++]=decnum+55;
		}
		else
		{
			hex[hexdigit++]=decnum+'0';
		}
		bingroups--;
	}
	hex[hexdigit]='\0';
}

int octalToBinary(int num)
{
	int octnum,octlength,octtemp,bintens,bintemp,binnum;
//Find out length of the octal number
	octnum=num;
	octlength=0;
	while(octnum>0)
	{
		octlength++;
		octnum/=10;
	}
//Convert each octal digit into their binary equivalent with exactly 3 bits each
	octnum=num;
	octtemp=0;
	bintens=1;
	binnum=0;
	while(octnum)
	{
		octtemp=octnum%10;
		octnum/=10;
		bintemp=decimalToBinary(octtemp);
		binnum+=(bintemp*bintens);
		bintens*=1000;
	}
	return binnum;
}

int octalToDecimal(int num)
{
	int octnum,decnum,power;
	octnum=num;
	decnum=0;
	power=0;
	while(octnum)
	{
		decnum+=(pow(8,power)*(octnum%10));
		power++;
		octnum/=10;
	}
	return decnum;
}

void octalToHexadecimal(int num,char hex[])
{
	int binnum,octnum,octtemp,bintens,bintemp;
	octnum=num;
	binnum=octalToBinary(octnum);
	binaryToHexadecimal(binnum,hex);
}

int decimalToBinary(int num)
{
	int decnum,tens,binnum;
	decnum=num;
	binnum=0;
	tens=1;
	while(decnum)
	{
		binnum+=(decnum%2)*tens;
		tens*=10;
		decnum/=2;
	}
	return binnum;
}

int decimalToOctal(int num)
{
	int decnum,octnum,tens;
	decnum=num;
	octnum=0;
	tens=1;
	while(decnum)
	{
		octnum+=(decnum%8)*tens;
		tens*=10;
		decnum/=8;
	}
	return octnum;
}

void decimalToHexadecimal(int num,char hex[])
{
	int decnum,hexnum,i;
	decnum=num;
	hexnum=0;
	i=0;
	while(decnum)
	{
		hexnum=(decnum%16);
		if(hexnum>9)
		{
			hex[i]=hexnum+55;
		}
		else
		{
			hex[i]=hexnum+'0';
		}
		i++;
		decnum/=16;
	}
	hex[i]='\0';
}

int hexadecimalToBinary(char hex[])
{
	int hexlength,bintens,bintemp,i,dectemp,binnum;
	char hexnum;
//Find out length of the hexadecimal number
	hexlength=0;
	while(hex[hexlength++]!='\0'){}
//Convert each hexadecimal digit into their binary equivalent with exactly 4 bits each
	bintens=1;
	binnum=0;
	i=hexlength-1;
	while(hexlength>=0)
	{
		hexnum=hex[i];
		if(isdigit((int)hexnum))
		{
			dectemp=(int)hexnum-'0';
			bintemp=decimalToBinary(dectemp);
			binnum+=(bintemp*bintens);
			bintens*=10000;
		}
		else if(isupper(hexnum))
		{
			dectemp=(int)hexnum-55;
			bintemp=decimalToBinary(dectemp);
			binnum+=(bintemp*bintens);
			bintens*=10000;
		}
		else if(islower(hexnum))
		{
			dectemp=(int)hexnum-87;
			bintemp=decimalToBinary(dectemp);
			binnum+=(bintemp*bintens);
			bintens*=10000;
		}
		else if(hexnum=='\0')
		{
		      //	cout<<"Null character!"<<endl;
		}
		else
		{
			cout<<"\nInvalid Hexadecimal number\n";
		}
		hexlength--;
		i--;
	}
	return binnum;
}

int hexadecimalToOctal(char hex[])
{
	int octnum,binnum;
	binnum=hexadecimalToBinary(hex);
	octnum=binaryToOctal(binnum);
	return octnum;
}

int hexadecimalToDecimal(char hex[])
{
	int i,size,decnum,power;
	char hexarr[20];
	i=0;
	while(hex[i++]!='\0'){}
	size=i-1;
	for(i=0;i<size;i++)
	{
		hexarr[i]=hex[i];
	}
	decnum=0;
	power=0;
	i=size-1;
	while(size)
	{
		if((((int)hexarr[i])<48)||(((int)hexarr[i])>57))
		{
		       decnum+=(pow(16,power)*((int)hexarr[i])-55);
		}
		else
		{
			decnum+=(pow(16,power)*((int)hexarr[i]-48));
		}
		i--;
		power++;
		size--;
	}
	return decnum;
}

void main()
{
	clrscr();
	int num,numbase,convbase,bin,oct;
	char hexa[20];
	convbase=2;
	cout<<"Any conversion involving Binary should range from its decimal equivalent [0-31] to avoid garbage value.\n(Press -1 to exit)\n";
	do
	{
		cout<<"\nEnter the base of the number that is to be converted:\n";
		cin>>numbase;
		if(numbase==-1)
		{
			exit(0);
		}
		if(numbase!=16)
		{
			cout<<"\nEnter the number:\n";
			cin>>num;
			if(num==-1)
			{
			     exit(0);
			}
			cout<<"Convert into? [Enter base]\n";
			cout<<"Press 1 for converting the number into all other bases\nBinary= 2\nOctal= 8\nDecimal= 10\nHexadecimal= 16\n";
			cin>>convbase;
			if(convbase==-1)
			{
				exit(0);
			}
			cout<<"\t";
			checkBase(num,numbase,convbase);
		}
		else
		{
			cout<<"\nEnter the hexadecimal number:\n";
			cin>>hexa;
			cout<<"Convert into? [Enter base]\n";
			cout<<"Press 1 for converting the number into all other bases\nBinary= 2\nOctal= 8\nDecimal= 10\n";
			cin>>convbase;
			if(convbase==-1)
			{
				exit(0);
			}
			cout<<"\t";
			checkHexaBase(hexa,convbase);
		}
	}while(convbase!=-1);
	getch();
}