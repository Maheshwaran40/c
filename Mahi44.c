#include <stdio.h>
#include <conio.h>
void main()
{
    int n, u, i, j, f, t, c = 0;
    printf("Enter the value of n and u \n");
    scanf("%d %d", &n, &u);
    if (u < 2)
    {
        printf("There are no primes upto %d\n", u);
        exit(0);
    }
    printf("Prime numbers are \n");
    temp = n;
    if ( n % 2 == 0)
    {
        n++;
    }
    for (i = n; i <= u; i = i + 2)
    {
        f= 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Number of primes between %d & %d = %d\n", temp, u, c);
}
