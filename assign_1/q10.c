#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,Perimeter,Area,s,sqrt;
	printf("please enter first side of triangle:");
	scanf("%f",&a);
	printf("please enter second  side of triangle:");
	scanf("%f",&b);
	printf("please enter third side of triangle:");
	scanf("%f",&c);

	Perimeter = a+b+c;
	s = Perimeter/2;
	Area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of triangle = %f\n",Area);
	printf("perimeter of triangle = %f\n",Perimeter);

	return 0;
}
