#include<stdio.h>
int main()
{
int x=12,y=34;
int * const ptr=&x;
printf("Value of * ptr is %d \n",*ptr);
//ptr=&y; Invalid statement
*ptr=90;
printf("Value of x is %d \n",x);

}