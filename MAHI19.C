#include <stdio.h>
int main()
{
    int a, b;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&a);

    // show error if the user enters a negative integer
    if (b < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(a=1; a<=b; ++a)
        {
            factorial *= a;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", a, factorial);
    }

    return 0;
}
