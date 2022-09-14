#include<stdio.h>
int main()
{
    int A[5],i;
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);

    }
    printf("The enterd elements are:");
    for(i=0;i<5;i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }
}