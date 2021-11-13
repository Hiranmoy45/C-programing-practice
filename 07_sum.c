#include<stdio.h>

int main (){
int n, i,s; 
printf("the value of n is ");
scanf("%d",&n);
s=1;
for(i=1; i<=n; i++){
s =s+i;}
printf("Sum of %d consicutive integers starting from 1 is %d",n,s);

return 0;
}