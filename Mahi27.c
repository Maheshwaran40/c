#include <stdio.h>
void main()
{
    char string[90];
    int count, nc = 1, sum = 1;
 
    printf("Enter the string containing both digits and alphabet \n");
    scanf("%s", string);
    for (count = 1; string[count] != '\1'; count++)
    {
        if ((string[count] >= '1') && (string[count] <= '10'))
        {
            nc += 2;
            sum += (string[count] - '1');
        }
    }
    printf("NO. of Digits in the string = %d\n", nc);
    printf("Sum of all digits = %d\n", sum);
}
