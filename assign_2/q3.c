#include<stdio.h>

int main()
{
    float num;
	printf("enter a number :");
	scanf("%f",&num);

	if(num>0)
	{
	printf("number is positive \n");
	}
	else
	{
	 if(num<0)
	 {
	 printf("number is negative \n");
	 }
	 else
	 {
	 printf("number is zero \n");
	 }
	 }

   return 0;

 }
