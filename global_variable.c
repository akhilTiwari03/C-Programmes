#include<stdio.h>
void display ();
int a;/*Global variable whoose initial value is zero and can  be called anywhere in the program*/
int main()
{
    a=20;
    extern int b;
    printf("A = %d\t",a);
    printf("B = %d\n",b);
    display();
}
void display()
{  
    extern int b;
    printf("A = %d\t",a);

   printf("B = %d\n",b);   
}
int b=39; /* Extern variable which is declared at the end of the program amnd is called using extern anywhere in the  program*/
