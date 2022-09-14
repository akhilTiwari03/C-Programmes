#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],C[100][100],i,j,k,m,n,p,q;
    printf("Enter the no of rows and columns of A:\n");
    scanf("%d %d",&m,&n);
     printf("Enter the no of rows and columns of B:\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
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
      printf("\n\tThe Multiplication of 2 Matrices are:\n \t");
      for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {  C[i][j]=0;
            for(k=0;k<q;k++)
            {
             C[i][j] += (A[i][j]*B[j][k]); 
            } 
               
                          
        } 
  
    }     
    for(i=0;i<m;i++)
    {
      printf("\n");
      for(j=0;j<q;j++)
      printf("\t|\t%d\t|",C[i][j]); 
    }     

    
}