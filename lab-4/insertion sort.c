#include<stdio.h>
#include<stdlib.h>
#include <time.h>
double time_spent = 0.0;
int n,a[10000],i,key=0,j=0;
int insertionsort() {
for(i=1;i<n;i++) {
key=a[i];
j=i-1;
while(j>=0 && a[j]>key){
a[j+1]=a[j];
j=j-1;}
a[j+1]=key;}

}

void printarray() {
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("\n");
}

int main()  {
clock_t start,end;
printf("enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
a[i]=rand()%300;
}
start=clock();
insertionsort();
end=clock();
printarray();
time_spent += (double)(end -start) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds\n", time_spent);



}

