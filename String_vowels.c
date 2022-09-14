#include<stdio.h>
int main()
{
    int i=0, count=0;
    char S[30];
    printf(" Enter the string \n");
    gets(S);
    while(S[i]!='\0')
    {
        if (S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
       { count++;
       }
       i++;
    }
    
printf(" Total number of vowels Are :%d", count);
}