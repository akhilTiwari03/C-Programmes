// using dynamic memory allocation to allocate memory to structure
// variable
// int *p;
//p=(int*)malloc(n*sizeof(int))
#include<stdio.h>
struct student
{
int roll_no;
char name[30];
float marks;
};
int main()
{
struct student *s;
int i,n;
printf("Enter the number of students\n");
scanf("%d",&n);
s=(struct student*)malloc(n*sizeof(struct student));//dynamically allocated
for(i=0;i<=n-1;i++)
{
printf("Enter the detail of student %d\n",i+1);
scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
}
printf("Detail of the students are\n");
for(i=0;i<=n-1;i++)
{

printf("%d %s %f\n",s[i].roll_no,s[i].name,s[i].marks);
}

}