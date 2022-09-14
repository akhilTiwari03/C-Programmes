#include<stdio.h>
int main()
{
    int *a,temp,i,j,n;
    printf(" Enter the number of element\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf(" Enter the %d Elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf(" Entered number of Elements Are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("\nNow! Elements Entered in Increasding Order Are :\n");
      for(i=0;i<n;i++)
      {
            for(j=i+1;j<n;j++)
            {
                  if(a[i]>a[j])
                  {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                  }
            }
      }
    
      for(i=0;i<n;i++)
      {
            printf("%d \n",a[i]);
      }
    
    
}