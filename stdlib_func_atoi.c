// to implement atoi() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
char x[30];
int d;
printf("Enter a string\n");
gets(x);
d=atoi(x);
printf("Value of d is %d ",d);

}