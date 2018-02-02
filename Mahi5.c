#include <stdio.h>
int main()
{
    double i, x,z;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &i, &x, &z);

    if( i>=x &&i>=z )
        printf("%.2f is the largest number.", i);

    if( x>=i && x>=z )
        printf("%.2f is the largest number.", x);

    if( z>=i && z>=x )
        printf("%.2f is the largest number.", z);

    return 0;
}
