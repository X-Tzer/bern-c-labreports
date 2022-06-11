//program to check whether a character is alphabet or not
#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("The character is an alphabet.\n");
	}
	else
	{
		printf("The character is not an alphabet.\n");
	}
	return 0;
}
