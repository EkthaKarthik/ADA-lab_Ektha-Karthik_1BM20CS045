#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ls();
void bs();

void main(){
    int ch;
   
   while(1){
       printf("Enter your choice:");
    printf("\n1.Linear Search \n2.binary search \n3.Exit\n");
    scanf("\n%d",&ch);
        switch(ch){
        case 1 : ls();
                 break;
        case 2 : bs();
                 break;
        case 3 : exit(0);
                 break;
        default : printf("wrong choice");
    }
   }
}

void ls(){
     int n, arr[20], key, y;
  printf ("Enter the number of elements in the array : ");
  scanf ("%d", &n);
 
 
  clock_t end, start;
  start = clock();
 
  for (int i = 0; i < n; i++)
    {
      arr[i] = (random()%1000);
    }
   
    printf("\nArray elements are : ");
    for (int i = 0; i < n; i++)
    {
      printf("\n%d",arr[i]);
    }
    printf ("\nEnter the integer you want to search");
  scanf ("\n%d", &key);

  for (int i = 0; i < n; i++)
    {
      if (arr[i] == key)
y = 1;
      else
y = 0;
    }
   
    if (y == 1)
    printf ("\nElement found");
  if(y==0)
    printf ("\nElement not found");
   
    end = clock();
    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nLinear search took %f seconds to execute \n", time_taken);

}

void bs(){
    int i,j,n,x,temp,key;
   
    printf ("Enter the number of elements in the array : ");
    scanf ("%d", &n);
    int arr[n];
   
     clock_t end, start;
  start = clock();
   
    for (int i = 0; i < n; i++)
    {
      arr[i]= random()%1000;
    }
   
    for(i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
}
 printf("The elements are:");
   for (i=0; i < n; i++)
        printf("%d ", arr[i]);
printf ("\nEnter the integer you want to search");
  scanf ("\n%d", &key);
 
int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}
 int result = binarySearch(arr, x, 0, n - 1);
if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
   
   
    end = clock();
    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nBinary search took %f seconds to execute \n", time_taken);

}
