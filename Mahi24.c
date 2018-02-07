#include <stdio.h>
#include<conio.h>
void main()
{
    int array[MAXSIZE];
    int i, j, n, t;
    printf("Enter the value of num \n");
    scanf("%d", &n);
    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    /*   Bubble sorting begins */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}
