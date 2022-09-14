#include<stdio.h>
int sumofdigits(int n);
int main()
{
    float n,s;
    printf("Enter the value of n:\n");
    scanf("%f",&n);
    s=sumofdigits(n);
    printf("The sum of digits of a number:%f\n",s);

}
int sumofdigits(int n)
{
    if(n==0)
    {
    return 0;
    }
    else
    {
        return (n%10+(sumofdigits(n/10)));
    }
    
}