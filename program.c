#include<stdio.h>
void main()
{
    int n,rev=0,t;
    printf("Enter the number you want to reverse\n");
    scanf("%d\n",n);
    printf("Confirm the number you want to reverse is %d",n);
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n=n/10;

    }
    printf("The number in reversed form which you have entered is : %d",rev);

}
