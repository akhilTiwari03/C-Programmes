#include<stdio.h>
#include<string.h>
int main()
{
    char X[30];
    int L;
    printf(" Enter the String : \t");
    gets(X);
    L=strlen(X);
    printf(" Length of the String is : %d",L);
}