#include<stdio.h>
int main()
{
    int A[100][100],i,j,m,n,sum=0;
    printf("Enter the no of rows and columns you Want:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the Elements of 2-Dimentional Array: \n");
    
    for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
        scanf("%d",&A[i][j]);
        }
      }
      sum = sum+A[i][j];
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",A[i][j]);
            if (A[i][j]%2==0)
            {
              sum = sum+A[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of all the elements of 2D-Array : \t%d",sum);
    
}