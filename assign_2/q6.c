#include<stdio.h>
int main()

{
    int num,temp,rev = 0,rem ;
    printf("enter 5 digit number :");
	scanf("%d",&num);

	 temp=num;
	 while(num !=0)
	 {
	 rem = num % 10;
	 rev = rev * 10 + rem;
	 num = num/10;
	 }
	 if(temp ==  rev)
	 {
	 printf("%d  is palindrome : \n",temp);
	 }
	 else
	 {
	 printf("%d  is not palindrome : \n",temp);
	 }
	 
 return 0;
 }
