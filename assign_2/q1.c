#include<stdio.h>

int main()

{
         float a,b,div;
		 printf("enter first number:");
		 scanf("%f",&a);
		 printf("enter second number:");
		 scanf("%f",&b);
		 div = a/b;

		 if(b!0)
		 {
		 printf("division of two number is: %f ",div);
		 
		 }

		 else
		 {
		 printf("number can not devided by zero :\n");

		 }

    return 0;


	}
