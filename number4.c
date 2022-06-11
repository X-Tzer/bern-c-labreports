//program to find the Simple Interest
#include<stdio.h>
int main()
{
	float p,t,r,SI;
	printf("Enter the Principal, Time and Rate of Interest:\n");
	scanf("%f%f%f",&p,&t,&r);
	SI=(p*t*r)/100;
	printf("The Simple Interest is %.3f",SI);
	return 0;
}
