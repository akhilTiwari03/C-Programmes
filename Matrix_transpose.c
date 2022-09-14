#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],i,j,m,n;
    printf("Enter the no of rows and columns of A:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the Elements of A: \n");
    
    for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
        scanf("%d",&A[i][j]);
        }
      }
  
      printf("\n\t A is :\n ");
      for(i=0;i<m;i++)
    {
           printf("\t  |");
        for(j=0;j<n;j++)
        {   
              
             printf("\t %d ",A[i][j]);
        
        } 
        printf("\t  |");
        printf("\n");
    }  
      printf("\n\tThe transpose of Matrix A is :\n ");
      for(i=0;i<m;i++)
    {
           printf("\t  |");
        for(j=0;j<n;j++)
        {    B[i][j]= A[j][i];
             {  
             printf("\t %d ",B[i][j]);
             }
        } 
        printf("\t  |");
        printf("\n");
    }          

    
}