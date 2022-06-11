//program to find the area and circumference of circle
#include<stdio.h>
int main()
{
	float r,area,c;
	printf("Enter the radius of the circle:\n");
	scanf("%f",&r);
	area=(22*r*r)/7;
	c=(2*22*r)/7;
	printf("The area is %.3f \n The circumference is %.3f\n",area,c);
	return 0;
}
