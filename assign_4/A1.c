#include<stdio.h>

int factorial();
int main()
{

  int num;
  printf("enter a number:");
  scanf("%d",&num);

  int res = factorial(num);
  printf("factorial of  %d is = %d \n",num,res);
  return 0;

}
 int factorial(int num)
 {  int fact =1;
   for(int i=1;i<=num;i++)
   {
   fact =fact*i;
   }
   return fact;
 }




