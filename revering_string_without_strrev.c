#include<stdio.h>
#include<String.h>
int main()
{
    char X[30], temp ;
    int i=0, len;
    printf(" Enter the value of X ");
    gets(X);
    len=strlen(X);
    while(i<len/2)
    {
    temp= X[i];
    X[i]=X[len-i-1];
    X[len-i-1]= temp;
    i++;
    }
    printf(" Reversed String is : ");
    puts(X);
}