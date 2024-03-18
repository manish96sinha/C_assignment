#include<stdio.h>

typedef struct student
  {
   int rollno;
   char name[20];
   float marks;
   }stud_t;
   void accept_student(stud_t *s);
   void print_student(stud_t s);
 int main()
   { 
    struct student s1;
	accept_student(&s1);
	print_student(s1);

	return 0;
    
	}
   void accept_student(stud_t *s)
   {
     printf("enter student details :rollno,name,marks \n");
	 scanf("%d %s %f",&s->rollno, s->name ,&s->marks);
   }
   void print_student(stud_t s)
   {
     printf("rollno =%d\nname =%s \nmarks=%f\n",s.rollno,s.name,s.marks);

   }

 
