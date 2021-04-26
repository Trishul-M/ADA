#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double time_spent = 0.0;
int n,arr[1000];
int selectionsort() {
int min=arr[0];
int pos=0,temp=0;
for(int i=0;i<(n-1);i++){
    pos=i;
for(int j=i+1;j<n;j++){
if(arr[pos]>arr[j]) {
    pos=j;
}
}
if(pos!=i) {
temp=arr[i];
arr[i]=arr[pos];
arr[pos]=temp;  } }
printf("the sorted array is\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
}

int main() {
  clock_t start,end;
printf("enter the number of elements of array\n");
scanf("%d",&n);

for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%500;
    }
 start=clock();
int c=selectionsort();
end = clock();
time_spent += (double)(end -start) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds", time_spent);


return 0;
}
