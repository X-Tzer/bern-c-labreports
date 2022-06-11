/*Program to input a mark in a subject of a student and check if the student is pass
or not ( Pass Marks=32)*/
#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the mark:");
	scanf("%d",&marks);
	if(marks>=32)
	{
		printf("The student has passed!\n");
	}
	else
	{
		printf("The student has failed!\n");
	}
	return 0;
}
