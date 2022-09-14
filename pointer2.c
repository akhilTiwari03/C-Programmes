// To show the working of pointer
#include<stdio.h>
int main()
{
int x=34;
int *p1,*p2;
p1=&x;
p2=&x;
printf("Value of *p1 is %d\n",*p1);//34
printf("Value of *p2 is %d\n",*p2);//34
*p1=100;
printf("Value of *p1 is %d\n",*p1);//100
printf("Value of *p2 is %d\n",*p2);//100

}
// size of a pointer is always of unsigned integer irrespective of data type //