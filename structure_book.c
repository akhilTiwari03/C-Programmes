#include<stdio.h>
struct book 
{
    int serial_no;
    char name[30];
    int price,pages;
}s[100];
int main()
{
    int i,n;
    printf("Enter the no. of employee data you want to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf(" Enter The Serial No. , Name , pages and  price of the %d Book:\n ",i+1);
    scanf ( "%d%s%d%d",& s[i].serial_no,s[i].name,&s[i].pages,&s[i].price);
    }
    printf(" Details of the Book having at least 50 pages and of at least 500 Rs :\n ");
    for(i=0;i<n;i++)
    {
        if (s[i].pages>=50&&s[i].price>=500)
    printf ( " %d \n %s \n %d \n %d \n", s[i].serial_no,s[i].name,s[i].pages,s[i].price);
    }
}