#include<stdio.h>
int main()
{
    int *a,i,n1,n2;
    printf(" Enter the number of elements\n");
    scanf("%d",&n1);
    a=(int*)malloc(n1*sizeof(int));
    printf(" Enter the %d Elements \n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);//or scanf("%d",(a+i)); or i+a;
    }
     printf(" Entered number of Elements Are\n");
    for(i=0;i<n1;i++)
    {
        printf("%d   ",a[i]);//or *a+i;
        printf("\n");
    }
    printf(" Enter the new number of elements\n");
    scanf("%d",&n2);
    realloc(a,n2*sizeof(int));
    printf(" Enter the %d Elements \n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a[i]);//or scanf("%d",(a+i)); or i+a;
    }
     printf(" Entered number of Elements Are\n");
    for(i=0;i<n2;i++)
    {
        printf("%d  ",a[i]);//or *a+i;
    }
}
