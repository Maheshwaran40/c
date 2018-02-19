#include <stdio.h>

int main()
{
    int i, n, f=0, s=1, t;
    printf("How many elements you want to print in a series \n");
    scanf("%d",&n);
    printf("Fibonacci Series is \n");
    printf(" %d  %d ",f ,s);
    for(i = 2; i < n; i++)
    {
      third = f+ s;
      printf(" %d ",t);
      f = s;
      s= t;
  }

 return 0;
 }
