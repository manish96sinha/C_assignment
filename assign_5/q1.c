#include<stdio.h>

int main()
{ 
   int subject[5];
   int total =0, avg;

   printf("enter subject marks:\n");
   for(int i =0 ;i<5;i++)
   { 
     printf("subject[%d] = ",i);
	 scanf("%d",subject +i);

	 }
   for(int i =0 ;i<5;i++)
   {
    total = subject[i] +total;
    }
	 printf("total of subject is = %d\n",total);

	 avg = total/5;
	 printf("average of subject is = %d\n",avg);



   return 0;
}
