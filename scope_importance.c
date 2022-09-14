#include<stdio.h>
int main()
{
    int a=20;
    int b=30;
    {
        int a=40;/* a new a variable limited to local scope*/
        b= 60; /* updation of value on previous variable*/
        printf(" A = %d , B = %d \n",a,b);
    }
    printf(" A = %d , B = %d \n",a,b);
}