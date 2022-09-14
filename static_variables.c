#include<stdio.h>
void increase(); /* prototype*/
int main()
{
    increase(); /*functioncall*/
    increase(); /*functioncall*/
    increase(); /*functioncall*/
    increase(); /*functioncall*/
}
void increase() /*Function define*/
{
    int a= 10; /* This variable is called auto variable,maintains its value within the braces ie.{} and forgets its previous value when goes out of this varable and again initialises its original/first value*/
    static int b= 10; /* this variable is called static variable as its name suggests and retains its previous value throughout the program and increment takes place it increases from the previous value */
    a++;
    b++;
    printf("A= %d , B= %d  \n",a,b);
    
}