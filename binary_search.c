#include <stdio.h>
 
void BinarySearching(int arr[], int max, int element)
{
      int low = 0, high = max - 1,flag=0, middle;
      while(low <= high)
      {
            middle = (low + high) / 2;
            if(element > arr[middle])
                  low = middle + 1; 
            else if(element < arr[middle])
                  high = middle - 1; 
             else if (element == arr[middle])
             {
                    flag=1;
                    break;
             }
                    
             else
             {
                    flag=0;
                    break;
             }
      }
      if (flag==1)
      {
        printf("Element %d Found at Position %d\n", element,middle+ 1);
      }
      else 
      {
           printf("Element %d Not Found\n", element);
      }
           
}
 
int main()
{
      int i,j,a,element, limit, arr[100];
      printf("Enter the Limit of Elements in Array:\t");
      scanf("%d", &limit);
      printf("Enter %d Elements in  Array: \n", limit);
      for(i= 0; i< limit;i++)
      {
            scanf("%d", &arr[i]);
      }
      for(i=0;i<limit;i++)
      {
            for(j=i+1;j<limit;j++)
            {
                  if(arr[i]>arr[j])
                  {
                        a=arr[i];
                        arr[i]=arr[j];
                        arr[j]=a;
                  }
            }
      }
      printf("Elements in ascending Order Are:\n");
      for(i=0;i<limit;i++)
      {
            printf("%d\n",arr[i]);
      }
      printf("Enter Element To Search:\t");
      scanf("%d", &element);
      BinarySearching(arr, limit, element);
}             