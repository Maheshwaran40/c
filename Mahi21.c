#include <stdio.h>
#include <math.h>
 
int main()
{
     int a, d, n, i, p;
     int sum = 0;
 
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &a);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= p; i = i + d )
     {
          if (i != p)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}

