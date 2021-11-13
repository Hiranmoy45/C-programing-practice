// Find a gamma function value of a number. By help of Function calling.


#include <stdio.h>

int gamma(int a);
int main()
{
    int a;
    printf("the value of a is = ");
    scanf("%d",&a);
    printf("the gamma value of a is %d", gamma(a));

    return 0;
}
int gamma(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return (a - 1) * gamma(a - 1);
    }
}