// To initialize the structure variable 
#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    char sec[10];
    int marks;
};
struct student s={ 1,"Akhil","K20SD", 100};
int main()
{
    printf(" Details of the student is :");
    printf(" %d \n %s \n %s \n %d \n",s.roll_no,s.name,s.sec,s.marks);
}