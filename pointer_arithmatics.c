#include<stdio.h>

int main()
{
    int a[]={ 12,34,56,78,90},*ptr,*ptr1,*ptr2;
    ptr=&a[2];
    ptr=ptr+1;
    printf("Adding a pointer %d\n", *ptr);
    ptr=ptr-1;
    printf("subtracting a pointer = %d\n",*ptr);
    ptr1 =&a[2];
    ptr2 =&a[4];
    printf("Subtracting ptr1-ptr2 = %d \n",*ptr1-*ptr2);
    if(ptr1==ptr2)
    {
        printf(" both belong to same location");
    }
    return 0;
}

