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
    //bubble sort
void bubbleSort(int arr[], int n) 
{
for (int i = 0; i < n - 1; ++i) {
      
    for (int j = 0; j < n - i - 1; ++j) 
    {
      // compare two adjacent elements
     
      if (arr[j] > arr[j + 1])
       {
        // swapping  if element are not in the intended order
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}
void merge(int arr[], int p, int q, int r) 
{
int i, j, k;
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for ( i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for ( j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintaining  current index of sub-arrays and main array
  
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
   
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merging the sorted subarrays
    merge(arr, l, m, r);
  }
}
int partition(int arr[], int left, int right) {
  
  // select the rightmost element as pivot
  int pivot = arr[right];
  int i = (left - 1);
  // traverse each element of the arrayand compare them with the pivot
  for (int j = left; j < right; j++) {
    if (arr[j] <= pivot) {
        
      // if element smaller than pivot is found ,swap it with the greater element pointed by i
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&arr[i + 1], &arr[right]);
  
  // return the partition point
  return (i + 1);
}
void quickSort(int arr[], int left, int right) {
  if (left < right) 
  {
    
    // find the pivot element such that elements smaller than pivot are on left of pivot
   int pi = partition(arr, left, right);
    
    // recursive call on the left of pivot
    quickSort(arr, left, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(arr, pi + 1, right);
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
  printf("3. Bubble sort\n");
  printf("4. Merge sort\n");
  printf("5. Quick sort\n");
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
  // sorting of array through bubble sort
 case 3:
  
    bubbleSort(data, n);
    printf("Sorted array in ascending Order:\n");
    printArray(data, n);
     break;
        // sorting of array through merge sort
  case 4:
    mergeSort(data, 0, n - 1);
    printf("Sorted array in ascending order: \n");
    printArray(data, n);
     break;
       // sorting of array through quick sort
   case 5:
    quickSort(data, 0, n - 1);
    printf("Sorted array in ascending order: \n");
    printArray(data, n);
     break;


  return 0;
  }
 }
