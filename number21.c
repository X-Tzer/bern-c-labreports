/*Write a C program to find area of circle, area of square, area of rectangle and
simple interest using switch case statement*/
#include<stdio.h>

int main()
{
	float rad,ac,l,lr,br,p,t,r,si;
	int opt;
	printf("Choose what you want to find:\n1.Area of circle\n2.Area of square\n3.Area of rectangle\n4.Simple interest\n");
	scanf("%d",&opt);
	switch(opt)
{
	case 1:
		{
			printf("Enter the radius of the circle:");
			scanf("%f",&rad);
			ac=(22*rad*rad)/7;
			printf("The area of the circle is %.3f sq units",ac);
		}
		break;
		case 2:
		{
			printf("Enter the length of the square:");
			scanf("%f",&l);
			printf("The area of square is %.3f sq units",(l*l));
		}
		break;
		case 3:
		{
			printf("Enter the length and breadth of the rectangle:\n");
			scanf("%f%f",&lr,&br);
			printf("The area of rectangle is %.3f sq units",(lr*br));
		}
		break;
		case 4:
		{
			printf("Enter the Principal, Time and Rate of interest:\n");
			scanf("%f%f%f",&p,&t,&r);
			si=(p*t*r)/100;
			printf("The simple interest is %.3f",si); 
		}
		break;
		default :
		{
			printf("Wrong choice!");
		}
}
	return 0;
}
