#include <stdio.h>
int main()
{
        int i = 0;

    printf("Enter an integer: ");
    scanf("%lld", &i);

    while(n != 0)
    {
        // i = i/10
        i /= 10;
        ++i;
    }

    printf("Number of digits: %d", i);
}
