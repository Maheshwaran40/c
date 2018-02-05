#include <stdio.h>
int main()
{
  int a ,b, i, p, n, r;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &a, &b);
  printf("Armstrong numbers between %d an %d are: ", a, b);
  for(i=a+1; i<b; ++i)
  {
      p=i;
      n=0;
      while(p!=0)
      {
          r=(p%10);
          n+=r*r*r;
          t/=10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
