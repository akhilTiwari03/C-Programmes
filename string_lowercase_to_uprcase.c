#include<stdio.h>
int main()
{
    int i=0, count=0;
    char S[30];
    printf(" Enter the string \n");
    gets(S);
    while(S[i]!='\0')
    {
        if (S[i]>='a'&&S[i]<='z')
        {
            S[i]=S[i]-32;
        }
        i++;
    }
    puts(S);
}
