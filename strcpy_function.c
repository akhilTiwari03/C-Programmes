#include<stdio.h>
#include<string.h>
int main()
{
    char X[20],Y[30];
    printf(" Enter the value of X");
    gets(X);
    strcpy(Y,X);// X is copied to Y
    printf(" The  copied string is :");
    puts(Y);
}