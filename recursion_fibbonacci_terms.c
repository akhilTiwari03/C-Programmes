#include<stdio.h>
 int fibb(int n);
int main()
{
   int i,n,f;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fibb(i);
        printf("%d  ",f);
    }
}
    int fibb( int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    {
        return(fibb(n-1)+ fibb(n-2));
    }
    
}