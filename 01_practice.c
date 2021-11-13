// This code for passing value to functions.

#include<stdio.h>
#include<math.h> 
int sum(int a, int b);
int main()
{
int c,p,q;
printf("Enter the value of a and b");
scanf("%d",&p);
printf("Enter the value of a and b");
scanf("%d",&q);
 
printf("%d",sum(p,q));
    return 0;
}
int sum(int a , int b)
{
int c;
c=a+b;
return c;
}