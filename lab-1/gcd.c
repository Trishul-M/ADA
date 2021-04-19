#include<stdio.h>
int gcd(int m,int n) {
int tem=0,rem=0;
if(n>m){
tem=n;
n=m;
m=tem;
}
rem=m%n;
if(rem!=0){
gcd(n,rem);
}
else
return n;

}
int main() {
int m,n;
printf("enter the numbers\n");
scanf("%d %d",&m,&n);
int g=gcd(m,n);
printf("GCD is %d",g);
}
