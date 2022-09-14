#include<stdio.h>
int main()
{
    int i,n,sum=0,avg;
    float M[n];
    printf("Enter the no of Students\n");
    scanf("%d",&n);
    printf("Now! Enter the Marks of respective %d Students",n);
    for(i=0;i<n;i++)
    {
        scanf("%d \n",&M[i]);
    }
    printf("The Marks of respective 10 students are: \n");
    for(i=0;i<n;i++)
    {
        printf("MARKS[%d] = %f\t\n",i,M[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+M[i];
    }
        avg=sum/n;  
    
    printf(" Average Marks of %d Students is :\t",n,avg);

}