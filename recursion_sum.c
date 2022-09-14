#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    s= sum(n);
    printf("The sum of first %d numbers is:%d\n",n,s);

}
int sum(int n)
{
    if(n==1)
     return 1;
    else
     return(n+sum(n-1));

}