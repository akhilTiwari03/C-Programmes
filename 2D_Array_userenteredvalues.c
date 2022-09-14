#include<stdio.h>
int main()
{
    int A[100][100],i,j,m,n;
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
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",A[i][j]);
        }
        printf("\n");
    }
}