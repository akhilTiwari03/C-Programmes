// to implement itoa() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
char x[30];
int i;
printf("Enter the value of i\n");
scanf("%d",&i);
itoa(i,x,2);// 2 denotes binary  number, 8 denotes octal, 10 is decimal, 16 is hexa decimal we can get any number 
printf("Value of x in binary form is\n");
puts(x);
itoa(i,x,16);
printf("Value of x in hexa form is\n");
puts(x);
}