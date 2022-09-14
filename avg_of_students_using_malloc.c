#include<stdio.h>
int main()
{
    float *a,sum=0,avg;
    int i,n;
    printf(" Enter the number of students\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf(" Enter the marks of %d students \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);//or scanf("%f",(a+i)); or i+a;
    }
    for(i=0;i<n;i++)
    {
    sum=sum+ a[i];
    }
    avg=sum/n;
    printf(" Average is %f \n",avg);
}