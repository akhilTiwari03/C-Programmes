#include<stdio.h>
int main()
{
    int A[10],i,sum=0;
    printf("Enter the elements of the array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);

    }
    for(i=0;i<10;i++)
    { 
     sum=sum+ A[i];
    }
    printf(" The sum of 10 elements is %d",sum);
}