#include<stdio.h>
#include<string.h>
int main()
{
    char X[30], Y[20];
    int c;
    printf(" Enter the value of X ");
    gets(X);
    printf(" Enter the value of Y ");
    gets(Y);
    c= strcmp(X,Y);// logic is X-Y =0 then equal otherwise not equal and also checks the upprcase and lowercase alphabets
    if(c==0)
    {
        printf(" Strings are equal ");
        
    }
    else
    {
        printf(" Strings are not equal  ");
    }
    
}