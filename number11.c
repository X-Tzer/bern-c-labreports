//program to check the given input number is odd or even
#include<stdio.h>

int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("The number is even.\n");
	}
	else
	{
		printf("The number is odd.\n");
	}
	return 0;
}
