#include<stdio.h>
#include<conio.h>
int main (){
int a,b;
char op='*';
printf("Enter value of op is ");
//scanf("%c",op);
scanf("%d%d",&a,&b);

switch(op);
 {
    case '*':
    {      
 printf("productis %d",a*b);
    }
    case '+':
    {
        printf("plus value is %d ",a+b)
    }
   
}
return 0;
}