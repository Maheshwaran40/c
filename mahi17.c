#include <stdio.h>
int main()
{
    int n, o, r, i = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    o = n;

    while (o != 0)
    {
        r = o%10;
        i += r*r*r;
        o /= 10;
    }

    if(i == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
