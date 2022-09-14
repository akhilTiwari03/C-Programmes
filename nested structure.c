// Nested structure
// A structure is said to be nested if it includes another structure
// with in it.
// by declaring the variable of one structure inside the another
#include<stdio.h>
struct address
{
char city[30];
char state[30];
};
struct employee
{
int id;
char name[30];
struct address a;
}e;
struct student
{
int roll_no;
char name[30];
struct address a;
}s;
int main()
{
printf("Enter the detail of employee\n");
scanf("%d%s%s%s",&e.id,e.name,e.a.city,e.a.state);
printf("Detail of the employee is\n");
printf("%d %s %s %s\n",e.id,e.name,e.a.city,e.a.state);

printf("Enter the detail of student\n");
scanf("%d%s%s%s",&s.roll_no,s.name,s.a.city,s.a.state);
printf("Detail of the student is\n");
printf("%d %s %s %s\n",s.roll_no,s.name,s.a.city,s.a.state);

}