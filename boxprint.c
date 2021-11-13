#include<stdio.h>

int main (){
int i, x[20];
for ( i = 1; i < 5; i++)
{
    printf("%d no student role is =\n",i);
    scanf("%d",&x[i]);
}
for ( i = 1; i < 5; i++)
{
    
   printf("%d no student role is =%d\n",i,x[i]);
}


return 0;
}