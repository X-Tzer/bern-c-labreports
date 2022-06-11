/*program to find the smallest number among three input numbers using
nested if else statement*/
#include<stdio.h>

int main()
{
	float x,y,z;
	printf("Enter the numbers:\n");
	scanf("%f%f%f",&x,&y,&z);
	if(x<y)
	{
		if(x<z)
		{
			printf("%.3f is the smallest.\n",x);
		}
		else
		{
			printf("%.3f is the smallest.\n",z);
		}
	}
	else
	{
				if(y<z)
		{
			printf("%.3f is the smallest.\n",y);
		}
		else
		{
			printf("%.3f is the smallest.\n",z);
		}
	
	}
	return 0;
}
