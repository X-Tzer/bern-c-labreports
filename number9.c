//program to illustrate the use of size of the operator 
#include<stdio.h>

int main()
{
  int x;
  float f;
  char ch;
printf("The integer is x, float is f and character is ch");
printf("Size of int=%d bytes", sizeof(int));
printf("\n Size of x=%d bytes", sizeof(x));
printf("\nSize of float=%d bytes", sizeof(float));
printf("\nSize of f=%d bytes", sizeof(f));
printf("\nSize of char=%d bytes", sizeof(char));
printf("\nSize of ch=%d bytes\n", sizeof(ch));
return 0;

}
