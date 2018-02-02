#include <stdio.h>
int main()
{
    int n, i, b= 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
       b += i;   // sum = sum+i;
    }

    printf("Sum = %d",b);

    return 0;
}
