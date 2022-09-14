// to show the working of malloc function
#include<stdio.h>
int main()
{
    int *a,i,n;
    printf(" Enter the number of element\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf(" Enter the %d Elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//or scanf("%d",(a+i)); or i+a;
    }
     printf(" Entered number of Elements Are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);//or *a+i;
    }
}
