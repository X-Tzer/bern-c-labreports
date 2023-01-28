//program to check the given input number is divisible by 7 or 9 or not
#include<stdio.h>

int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	if((x%7==0)||(x%9==0))
	{
		printf("The number is divisible by 7 or 9.\n");
	}
	else
	{
		printf("The number is not divisible by 7 or 9.\n");
	}
	return 0;
}
