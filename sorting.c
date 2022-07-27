#include <stdio.h>
//printing array after sorting
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
//swapping 2 elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

    //insertion sort
    void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++)
     {
      // comparing element of array with key element
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

}
//selection sort mthd
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) 
    {
      //finding minimum index while traversing 
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
       swap(&arr[minIndex], &arr[i]);
        }
    }
//main function
int main()
 {
  
  int n;
   printf("choose size of array:\n");
  scanf("%d", &n);
 
  int data[n];
  for(int i=0;i<n;i++){
    printf("enter the %dth element of data:\n", i);
    scanf("%d", &data[i]);
  }
  //various wys for sorting 
  int op;
  
  printf("1. insertion sort\n");
  printf("2. Selection sort\n");
 /* printf("3. Bubble sort\n");
  printf("4. Merge sort\n");
  printf("5. Quick sort\n");*/
  printf("input type of sorting to do  :\n");
  scanf("%d", &op);
  switch(op)
  {
    // sorting of array through insertion sort
    case 1:
    insertionSort(data,n);
    printf("Sorted array in ascending order:\n");
    printArray(data, n);
    break;
    // sorting of array through selection sort
 case 2:
    selectionSort(data, n);
    printf("Sorted array in acsending Order:\n");
    printArray(data,n);
     break;
 
  default:
  printf("\n You have entered an Invalid input ");

  return 0;
  }
 }
