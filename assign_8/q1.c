#include<stdio.h>

typedef struct student
{ 
  int rollno;
  char name[20];
  float marks;
  }stud_t;

  int main()
  {
    stud_t s1;

	printf("enter student rollno :");
	scanf("%d",&s1.rollno);

	printf("enter student name :");
	scanf("%*c%[^\n]s",s1.name);

	printf("enter student marks :");
	scanf("%f",&s1.marks);


	printf("rollno =%d\nname= %s\nmarks =%f\n",s1.rollno,s1.name,s1.marks);

 return 0;
}
