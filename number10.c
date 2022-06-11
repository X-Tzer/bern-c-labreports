//program to find the largest beetween two input numbers
#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter the numbers:\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		printf("%d is the greatest.\n",x);
	}
	else
	{
		printf("%d is the greatest.\n",y);
	}
	return 0;
}
