#include<stdio.h>
#define pi 3.1416
int main()
{
	
	double L, B, a_rectangle, a_circle, radius,
	c_circle, p_rectangle;
	
	printf("Enter the Length:");
	scanf("%lf", &L);
	printf("Enter the Breadth: ");
	scanf("%lf", &B);
	printf("Enter the radius: ");
	scanf("%lf", &radius);
	
	   p_rectangle= 2*(L+B);
	   a_rectangle=L*B;
	   c_circle=2*pi*radius;
	   a_circle= pi*radius*radius; 
	   
	   printf("Area of Rectangle: %.2lf\n", a_rectangle);
	   printf("Area of Circle: %.2lf\n", a_circle);
       printf("perimeter of Rectangle: %.2lf\n", p_rectangle);
       printf("Circumferance of Circle: %.2lf\n", c_circle);
	return 0;
	
}
