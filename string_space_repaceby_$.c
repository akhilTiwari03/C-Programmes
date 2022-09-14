
#include<stdio.h>
int main()
{
    int i=0, count=0;
    char S[30];
    printf(" Enter the string \n");
    gets(S);
    while(S[i]!='\0')
    {
        if (S[i]==' ')
       { 
           S[i]='$';
       }
       i++;
    }
    
printf(" Updated String is :\n");
puts(S);
}