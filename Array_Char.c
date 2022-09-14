#include<stdio.h>
int main()
{
    int i,n;
    
    printf("Enter the no of characters you want to enter\n");
    scanf("%d",&n);
    char M[n];
    printf("Now! Enter the  %d characters ",n);
    for(i=0;i<n;i++)
    {
        scanf("%c \n",&M[i]);
    }
    printf("The Marks of respective 10 students are: \n");
    for(i=0;i<n;i++)
    {
        printf("Character[%d] = %c\t\n",i,M[i]);
    }
}