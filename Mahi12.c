#include <stdio.h>
int main()
{
    int n, i = 0, o, p;

    printf("Enter an integer: ");
    scanf("%d", &n);

   p = n;

    // i is stored in variable 
    while( n!=0 )
    {
        o = n%10;
        i = i*10 + o;
        n /= 10;
    }

    // palindrome if p and i are equal
    if (p== i)
        printf("%d is a palindrome.", p);
    else
        printf("%d is not a palindrome.",p);
    
    return 0;
}
