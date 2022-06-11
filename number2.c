//program to read and display integer value, floating value, character and string.
#include<stdio.h>
int main()
{
	int x;
	float f;
	char ch,name[20];
	printf("Please input the values in the order if Integer, Float, Character, String.\n");
	scanf("%d%f %c  %s",&x,&f,&ch,name);/*Space is given before %c&%s
	 because scanf reads the line break as a new character*/
	printf("Integer value is %d\nFloat value is %f\n Character is %c\nString is %s",x,f,ch,name);
	return 0;
}
