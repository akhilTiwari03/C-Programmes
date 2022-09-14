#include<stdio.h>
struct book 
{
    int serial_no;
    char name[30], author[10];
    int price;
}s,s1;
int main()
{
    printf(" Enter The Serial No. , Name , Author and  price of the Book ");
    scanf ( "%%%%d ",& s.serial_no,s.name,s.author,&s.price);
    scanf ( "%%%%d ", &s1.serial_no,s1.name,s1.author,&s1.price);
    printf(" The Serial No. , Name , Author and  price of the Book  is: ");
    printf ( " %d \n %s \n %s \n %d \n", s.serial_no,s.name,s.author,s.price);
    printf ( " %d \n %s \n %s \n %d \n", s1.serial_no,s1.name,s1.author,s1.price);
}