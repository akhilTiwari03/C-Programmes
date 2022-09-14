// to take input and output of string using scanf printf
#include<stdio.h>
int main()
{
char x[30];
printf("Enter a string\n");
scanf("%s",x);
printf("Entered string is\n");
printf("%s",x);// but it will not print the multiword string
}

