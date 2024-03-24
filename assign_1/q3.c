#include<stdio.h>

int main()
{

    char ch;

	printf(" enter a character:");
	scanf("%c",&ch);
	printf("ASCII value in decimal : %d \n",ch);
	printf("ASCII value octal : %o \n",ch);
	printf("ASCII value in hexadecimal : %d \n",ch);

	int asciivalue;

	printf("enter an ASCII value: ");
	scanf("%d",&asciivalue);
	printf("Character of ASCII value %d is:%c\n ", asciivalue, asciivalue);

   return 0;
}


