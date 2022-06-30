#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort( long int arr[], float n)
{
  int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
  
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    long int n = 10000;
    int it = 0;
  

    double tim2[10];
  
    printf("Array size, Time taken for insertion sort\n");
  
    while (it++ < 10) {
     long int b[n];
  
     
        for (int i = 0; i < n; i++) {
            long int no = rand() % n + 1;
            b[i] = no;
        }
  
        clock_t start, end;
        
         start = clock();
        insertionSort(b, n);
        end = clock();
  
        tim2[it] += ((double)(end - start)/CLOCKS_PER_SEC);
        printf("%li,%f\n",n,(double)tim2[it]);

        n += 10000;
    }
  
    return 0;
}
