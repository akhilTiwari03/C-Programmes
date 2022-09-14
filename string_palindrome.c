//to check whether a string is a palindrome string or not.
#include<stdio.h>
#include<string.h>
int main()
{
char x[30],y[30],temp;
int i=0,len,c;
printf("Enter the value of x string\n");
gets(x);
strcpy(y,x);
len=strlen(x);
while(i<len/2)
{
temp=x[i];
x[i]=x[len-i-1];
x[len-i-1]=temp;
i++;
}
c=strcmp(x,y);
if(c==0)
printf("String is palindrome\n");
else
printf("String is not palindrome\n");
}

