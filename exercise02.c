#include<stdio.h>
int main()
{
	float   km, meter,inch,feet,cm;
	printf("Enter Distance from Mirpur to Ashulia : ");
	scanf("%f", &km);
	
	meter= km * 1000;
    cm= km * 1000 * 100;
    feet= km * 3280;
    inch= km * 39370;
    
    printf("Distance in Meter from Mirpur to Ashulia:%.3f\n", meter);
    printf("Distance in Centimeter from Mirpur to Ashulia:%.3f\n", cm);
    printf("Distance in Feet from Mirpur to Ashulia:%.3f\n", feet);
    printf("Distance in Inches from Mirpur to Ashulia:%.3f\n", inch);
    
	
	return 0;
}
