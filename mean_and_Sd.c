//write a c program to find the mean and standard deviation of 10 given number's use array.

#include<stdio.h>
#include<math.h>

int main (){
  
float M,S,x[10],SUM1=0,SUM2=0;

for (int i = 1; i <=5; i++)
{
    printf("the %d no given value of ",i);
 scanf("%f",&x[i]);
}
for (int i = 1; i < 10; i++)
{
 SUM1=SUM1+x[i];
 SUM2=SUM2 +x[i]*x[i];
}

M=SUM1/10;
S=sqrt(SUM2/10-M*M);
printf(" mean= %2f\n",M);
printf("S.D=%f",S);
return 0;
}