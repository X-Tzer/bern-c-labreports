/*Program to calculate sum, difference, product, division and reminder using
switch case statement.*/
#include<stdio.h>

int main()
{
	int a,b,opt;
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Choose an operation:\n1.Sum\n2.Difference\n3.Product\n4.Divide\n5.Remainder\n");
	scanf("%d",&opt);
	switch(opt)
{
	case 1:
		{
			printf("Sum is %d",(a+b));
		}
		break;
		case 2:
		{
			printf("Difference is %d",(a-b));
		}
		break;
		case 3:
		{
			printf("Product is %d",(a*b));
		}
		break;
		case 4:
		{
			printf("Division is %.3f",((float)a/(float)b));
		}
		break;
		case 5:
		{
			printf("Remainder is %d",(a%b));
		}
		break;
		default :
		{
			printf("Wrong choice!");
		}
		break;
}
	return 0;
}
