//the average of n number .
#include<stdio.h> 
#include<conio.h> 
void main( )   
{  
    int  clscr();
  int n, count = 1;   
  float x, average, sum = 0;   
  printf("Enter the value of n?");  
  scanf ("%d",&n);   
  while (count <= n)   
     {   
      printf ("Enter the %d number?",count);   
      scanf("%f", &x);   
      sum += x;   
      ++count;   
     }   
      average = sum/n;   
      printf("\nThe Average is %f\n", average);   
      getch();
      return 0;
}  