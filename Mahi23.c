#include <stdio.h>
#include<conio.h>
int main() 
{
    int array[100], min, s, c, l = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&s);
 
    printf("Enter %d integers\n", s);
 
    for ( c = 0 ; c < s ; c++ )
        scanf("%d", &array[c]);
 
    min = array[0];
 
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( array[c] < min ) 
        {
           min = array[c];
           l = c+1;
        }
    } 
 
    printf("Min element is present at l %d and it's value is %d.\n", l, min);
    return 0;
}
