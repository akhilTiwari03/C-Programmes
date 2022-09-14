#include<stdio.h>
long long int factorial(long long int n);
int main()
{ 
   long long int n,f ;
    printf("Enter the value of n\n\t");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial is :%lld\t",f);
}
long long int factorial(long long int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return(n*factorial(n-1));
    }
}