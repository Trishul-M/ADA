#include<stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
         int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


int main()
{
    int arr1 [10], arr2 [10], arr3 [20];
   int i, n1, n2, m, index=0;
   printf("\n Enter the number of elements in array 1: ");
   scanf("%d", &n1);
   printf("\n\n Enter the Elements of the first array");
   printf("\n ****\n");
   for(i=0;i<n1;i++)  {
     scanf ("%d",&arr1[i]);
   }
   printf("\n Enter the number of elements in array 2: ");
   scanf ("%d", &n2 );
   printf("\n\n Enter the Elements of the second array");
   printf("\n ****\n");
   for(i=0;i<n2;i++) {
      scanf ("%d", &arr2[i]);
      m = n1+n2;
   }
   for(i=0;i<n1;i++) {
     arr3[index]=arr1[i];
     index++;
   }
   for(i=0;i<n2;i++) {
      arr3[index]=arr2[i];
      index++;
   }
   printf ("\n\n The merged array is");
   printf ("\n **** " );
   for(i=0;i<m;i++) {
     printf("\t\n Arr[%d] = %d", i, arr3[i]);
   }


    printf ("\n\n The sorted array is");

   mergeSort(arr3, 0, m-1);
   printf("\n");
   printArray(arr3, m);
    return 0;
}
