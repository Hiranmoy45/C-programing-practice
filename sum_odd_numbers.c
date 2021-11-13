//write a c program to find the sum of n consicutive odd intergers starting from 5.
#include <stdio.h>
#include <conio.h>
int main()
{
    int clrscr();
    int n, i, s;
    printf("The value of n is = ");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i < n; i++)
    {
        s += (2 * i + 3);
    }
    printf("The sum of %d consicutive odd integers starting from 5 is %d ", n, s);
    getch();
    return 0;
}