// To add an integer to a pointer variable
#include<stdio.h>
int main()
{
int a[]={12,34,56,78,90};
int *p;
p=&a[0];
printf("Value of *p is %d\n",*p);//12
p=p+1;
printf("Value of *p is %d\n",*p);//34

}