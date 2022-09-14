#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],C[100][100],i,j,m,n,p,q;
    printf("Enter the no of rows and columns of A:\n");
    scanf("%d %d",&m,&n);
     printf("Enter the no of rows and columns of B:\n");
    scanf("%d %d",&p,&q);
    if(m!=p || n!=q)
    {
      printf("\t\tWrong Input! \nPlease Enter the same no of rows and columns of A and B.\n\t\tThankYou!\n");
      return 0;
    }
    printf("Enter the Elements of A: \n");
    
    for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
        scanf("%d",&A[i][j]);
        }
      }
  
    printf("Enter the Elements of B: \n");
    
    for(i=0;i<p;i++)
      {
        for(j=0;j<q;j++)
        {
        scanf("%d",&B[i][j]);
        }
      }
      printf("\n\tThe sum of 2 Matrices are:\n \t");
      for(i=0;i<p;i++)
    {
           printf("\t  |");
        for(j=0;j<q;j++)
        {
             C[i][j] = A[i][j] + B[i][j]; 
             {  
             printf("\t %d ",C[i][j]);
             }
        } 
        printf("\t  |");
        printf("\n");
    }          

    
}