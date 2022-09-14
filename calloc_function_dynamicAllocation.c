#include<stdio.h>
int main()
{
    int *a,i,n;
    printf(" Enter the number of element\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf(" Enter the %d Elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//or scanf("%d",(a+i)); or i+a;
    }
     printf(" Entered number of Elements Are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);//or *a+i;
    }
}
