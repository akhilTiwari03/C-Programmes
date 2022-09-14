//array of structures
#include<stdio.h>
struct student 
{
    int id;
    char name[30], dep[10];
    float sal ;
}s[100];
int main()
{
int i,n ;
printf("Enter the no. of employee data you want to enter :");
scanf("%d",&n);
for(i=0; i<n;i++)
{
printf(" Enter the I.D. , Name , Department, and Salary of %d Employee", i+1);
scanf("%d%s%s%f ",&s[i].id,s[i].name,s[i].dep,&s[i].sal);
}
for(i=0; i<n;i++)
{
printf("The I.D. , Name , Department, and Salary of %d Employee is:\n", i+1);
printf(" %d  %s  %s  %f ",s[i].id,s[i].name,s[i].dep,s[i].sal);
}
}