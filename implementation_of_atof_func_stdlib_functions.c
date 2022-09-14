// to implement atof() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
char x[30];
double d;
printf("Enter a string\n");
gets(x);
d=atof(x);
printf("Value of d is %.2lf ",d);//.2lf means 2 digit after decimal in long float

}