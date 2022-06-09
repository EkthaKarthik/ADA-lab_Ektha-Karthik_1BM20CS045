#include <stdio.h>
#include<stdlib.h>
#include<time.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
   for(i=0;i<n-1;i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        swap(&arr[min_idx], &arr[i]);
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[20],l;
    printf("Enter the number of elements");
    scanf("%d",&l);
   
   clock_t end, start;
  start = clock();
   
    for (int i = 0; i < l; i++)
    {
      arr[i]= random()%1000;
    }
    selectionSort(arr, l);
    printf("Sorted array: \n");
    printArray(arr, l);
        double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nSelection sort took %f seconds to execute \n", time_taken);
    return 0;
}
