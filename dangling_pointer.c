

// To show the working of dangling pointer
#include<stdio.h>
int main()
{
int *ptr;
{
int x=23;// local
ptr=&x;
printf("Value of *ptr is %d\n",*ptr);//23
}
printf("Value of *ptr is %d\n",*ptr);// dangling pointer
//printf("Value of x is %d\n ",x);invalid

}

