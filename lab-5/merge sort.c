#include <stdio.h>
#include <conio.h>

#include <time.h>
double time_spent = 0.0;
int n;


void merge(int arr[], int p, int q, int r) {


  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];


  int i, j, k;
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


void mergeSort(int arr[], int l, int r) {
  if (l < r) {


    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}


void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}


int main() {
int arr[100000];
printf("enter the number of elements\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
arr[i]=rand()%300;
}
clock_t start,end;

start=clock();
  mergeSort(arr, 0, n - 1);
end=clock();

  printf("Sorted array: \n");

  printArray(arr, n);
  time_spent += (double)(end -start) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds\n", time_spent);

}
