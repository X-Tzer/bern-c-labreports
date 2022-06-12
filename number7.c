//program to illustrate conversion specification.
#include<stdio.h>
int main()
{
	int r;
	printf("Enter radius:\n");
	scanf("%d",&r);
	float a;
	a=3.14*(float)(r*r); //converting r*r from integer into float
	printf("Area=%.3f",a);
	return 0;
}
