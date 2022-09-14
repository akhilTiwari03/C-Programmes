#include<stdio.h>
struct Employee
{
    int id;
    char name[30], city[30];
}s[100];
int main()
{
int i,n ;
printf("Enter the no. of employee data you want to enter :");
scanf("%d",&n);
for(i=0; i<n;++i)
{
printf(" Enter the I.D. , Name , City of %d Employee", i+1);
scanf("%d%s%s",&s[i].id,s[i].name,s[i].city);
}
printf("Details of the Employee who belong to Amritsar :\n");
for(i=0; i<n;i++)
{ 
    if(strcmp(s[i].city,"Amritsar")==0)
printf(" %d \n %s \n %s \n",s[i].id,s[i].name,s[i].city);
}
}