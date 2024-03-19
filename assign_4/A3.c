#include<stdio.h>

float calculator(float,char,float);

int main()
{
  float  a,b,result;
  char op;
  printf("enter first number :");
  scanf("%f",&a);

  printf("enter operator :");
  scanf(" %c",&op);

  printf("enter second  number :");
  scanf("%f",&b);

   result = calculator(a,op,b);
   printf("result =%f\n",result);

   return 0; 
}

float calculator(float a,char op,float b)
{ float res;
switch(op)
{ 

case'+': res = a+b;
		break;
case'-': res = a-b;
		 break;
case'*': res = a*b;
		break;
case'/':if(b!=0)
      {
        res = a/b;
       }
	   else
	   {
	   printf("operand can't be zero");
	   }
	   break;
default:
       printf("invalid operator \n");
       break;
}
 return res;
}
