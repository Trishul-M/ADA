#include<stdio.h>
#include<stdlib.h>
#include <time.h>
 int num[100],f;
   double time_spent = 0.0;


int linear_search (int a[f],int n)
{

for(int i=0;i<f;i++)
{
    if(a[i]==n)
    return i;

}

return -1;
}


void sort(int a[f])
{
    int temp;
    for(int i=0;i<f;i++)
    {
        for(int j=i+1;j<f;j++)
        {
            if(a[i]>=a[j])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
    printf("sorted array");
    for(int i=0;i<f;i++)
    {
     printf("%d\n",a[i]);
    }
}


int binary_search(int a[f],int l,int r,int n){

   sort(a);

 while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] == n)
            return m;

        if (a[m] < n)
            l = m + 1;

        else
            r = m - 1;
    }


    return -1;

}



int main()
{


    int n,r,res,choice;
    printf("en");
    scanf("%d",&f);

    for(int i=0;i<f;i++)
    {
      r=rand()%200;
      num[i]=r;
    }

    printf("The array elements are:\n");

      for(int i=0;i<f;i++)
    {
     printf("%d\n",num[i]);
    }


  printf("Enter choice\n1.linear\n2.binary\n");
 scanf("%d",&choice);

  switch(choice)
  {
      case 1: printf("Enter value to be searched\n");
               scanf("%d",&n);
               clock_t begin = clock();
              res=linear_search(num,n);
              if(res==-1)
              printf("Element not found in linear search\n");
              else
              printf("Element found at linear search %d\n",res);
              clock_t end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds", time_spent);
              break;


     case 2:printf("Enter value to be searched\n");
               scanf("%d",&n);
                begin = clock();
              res=binary_search(num,0,f-1,n);
              if(res==-1)
              printf("Element not found in binary search\n");
              else
              printf("Element found at binary search %d\n",res);
              end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds", time_spent);
              break;
  }


}
