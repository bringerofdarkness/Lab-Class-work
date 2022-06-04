#include<stdio.h>
int main()
{
	int num, sum ,dig_1, dig_2, dig_3, dig_4, dig_5,
	x1,x2,x3,x4,x5;
	
   printf("Enter a five digit number:\n");
   scanf("%d", &num);
   
    dig_1=num/10;
   x5=num%10;
   dig_2=dig_1/10;
   x4=dig_1%10;
   dig_3=dig_2/10;
   x3=dig_2%10;
   dig_4=dig_3/10;
   x2=dig_3%10;
   dig_5=dig_4/10;
   x1=dig_4%10;
   
   sum= (x1) +(x2)+(x3)+(x4)+(x5);
   
   
   printf("sum:%d", sum);
 
 
 
	return 0;
}
