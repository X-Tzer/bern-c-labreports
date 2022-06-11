//program to check whether a year is leap year or not
#include<stdio.h>

int main()
{
	int x;
	printf("Enter the year:");
	scanf("%d",&x);
	if(x%4==0)
	{
		if(x%100==0)
		{
			if(x%400==0)
			{
				printf("The year is a leap year.\n");
			}
			else
			{
				printf("The year is not a leap year.");
			}
		}
		else
		{
			printf("The year is a leap year.\n");
		}
	}
	else
	{
		printf("The year is not a leap year.\n");
	}
	return 0;
}
