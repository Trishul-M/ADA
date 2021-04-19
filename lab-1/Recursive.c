#include<stdio.h>
void mov(int n,char sour,char dest,char inte) {
if(n==1)
printf("MOV ring from %c to %c\n",sour,dest);
else {
 mov(n-1,sour,inte,dest);
 mov(1,sour,dest,inte);
 mov(n-1,inte,dest,sour);
}
}
int main() {
int n;
printf("enter number of rings");
scanf("%d",&n);
mov(n,'A','C','B');
return 0;
}
