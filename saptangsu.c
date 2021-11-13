#include <stdio.h>
#include <math.h>
int main()
{
    char r='i';
    float a,b,c,x1,x2,p,q,d;
    scanf("%f%f%f", &a,&b,&c);
    d=b*b-4*a*c;
    if (d>=0)
    {
        printf("the roots are real");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\n the roots are %0.2f,%0.2f",x1,x2);
        goto final;}
       else{ p=-b/2*a;
        q=sqrt(-d)/2*a;
        printf("the 1st root is %f+%f*%c",p,q,r);
        printf("the 2nd root is %f-%f*%c",p,q,r);
       }
        final:
        return 0;
}
