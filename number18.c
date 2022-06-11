/*Program to check whether a person is eligible to vote or not based on input age
using ternary operator. [age>=18 is eligible or not]*/
#include<stdio.h>

int main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	age>=18?printf("Eligible to vote"):printf("Not eligible to vote");	
	return 0;
}
