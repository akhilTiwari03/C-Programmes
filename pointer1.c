#include<stdio.h>
int main()
{
    int *p, x=32;
    p= &x;
    float *y , a=28.00;
    y= &a;
    char *c , b='u';
    c=&b;
printf("Value of p is %x\n",p);/* address is formatted by %x,%p , %u , %d*/
printf("\n");
printf("Address of x is %x\n",&x);
printf("\n");
printf("Value of *p is %d\n",*p);// dereferening
printf("\n");
printf("Value of y is %x\n",y);
printf("\n");
printf("Address of a is %x\n",&a);
printf("\n");
printf("Value of *y is %f\n",*y);// dereferening
printf("\n");
printf("Value of c is %x\n",c);
printf("\n");
printf("Address of b is %x\n",&b);
printf("\n");
printf("Value of *c is %c\n",*c);// dereferening
printf("\n");

}