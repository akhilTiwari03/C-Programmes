// to show the working of the union
#include<stdio.h>
#include<string.h>
union student
{
int roll_no;//4 bytes
char name[30];// 30 bytes
float marks;// 4 bytes
};
union student s;// compiler will allocate 30 bytes
//union student s={1,"rohan",365};
int main()
{
printf("Enter the roll no\n");
scanf("%d",&s.roll_no);
printf("Roll no is %d\n",s.roll_no);
printf("Enter the name\n");
scanf("%s",s.name);
printf("Name is %s\n",s.name);
printf("Enter the marks\n");
scanf("%f",&s.marks);
printf("Marks is %f\n",s.marks);

}