#include<stdio.h>
#include<stdlib.h> 
int main()
{
 int n, i, *a;
 int Even_Sum = 0, Odd_Sum = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &n);
 a=(int*)malloc(n*sizeof(int));
 printf("\nPlease Enter the %d Elements in an Array:\n",n);
 for(i = 0; i <n; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i <n; i ++)
 {
   if(i% 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[i];
   }
 }
  
 printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
 printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
 return 0;
}