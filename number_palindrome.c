#include<stdio.h>
int palindrome(int n);
int main()
{
    int n,flag;
    printf("Enter a number which you want to check for palindrome: ");
    scanf("%d",&n);
    flag=palindrome(n);
    if(flag==1)
    printf("%d is a Palindrome number\n",n);
    else
    {
        printf("%d is not a palindrome number\n",n);
    }
    
    
}
int palindrome(int n)
{
    int t,rev=0,flag,original;
    original=n;
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    if (rev==original)
    {
        return (flag=1);
    }
    else
    {
        return (flag=0);
    }
    
     
}