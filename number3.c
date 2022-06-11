//program to take two input and find the sum, difference, product, division and remainder
#include<stdio.h>
int main()
{
	float div;
	int x,y,sum,diff,prod,rem;
	printf("Enter the numbers:\n");
	scanf("%d%d",&x,&y);
	sum=x+y;
	diff=x-y;
	prod=x*y;
	div=x/y;
	rem=(int)(x%y);
	printf("The sum is %d \n The difference is %d \n The product is %d \n The divide is %.3f \n The Remainder is %d ",sum,diff,prod,div,rem);
	return 0;
}
