#include<stdio.h>
#include<string.h>
int main()
{
    char X[20], Y[20];
    printf(" Enter the value of X ");
    gets(X);
    printf(" Enter the value of Y ");
    gets(Y);
    strcat(X,Y);// Used to join the two strings
    puts(X);
}