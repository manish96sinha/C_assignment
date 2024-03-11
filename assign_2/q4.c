#include<stdio.h>

int main()
{
        float a,b;
		printf("enter first number:");
		scanf("%f",&a);
        printf("enter second  number:");
		scanf("%f",&b);


	  if(a>b)
	  {
	  printf("first number %f is greater \n",a);
	  }
	  else
	  {
	  if(a<b)
	  {
	  printf("second number %f is greater \n",b);
      }
	  else
	  {
	  printf(" number is eqal \n");
	  }


	  }

	 printf("============================================================\n");
	
    ( a > b ? printf("first number %f is greater \n",a):printf("second number %f is greater \n",b));
  
     return 0;
}
