/* To input and output of 2d array*/
#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    printf("Enter the Elements of 2Dimentional Array \n");
    
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
        scanf("%d",&A[i][j]);
        }
      }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",A[i][j]);
        }
        printf("\n");
    }
}