/*program to find the largest number among four input numbers using
ladder of if else statement.*/
#include<stdio.h>

int main()
{
	float a,b,c,d;
	printf("Enter the numbers:\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
		printf("%.3f number is the largest.\n",a);
	}
	else if(b>a&&b>c&&b>d)
	{
		printf("%.3f number is the largest.\n",b);
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("%.3f number is the largest.\n",c);
	}
	else
	{
		printf("%.3f number is the largest.\n",d);
	}
	return 0;
}
