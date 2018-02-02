#include<stdio.h>
 #include<conio.h>
void main()
{
    int i;
 
    printf("Enter a year \n");
    scanf("%d", &year);
    if ((i % 400) == 0)
        printf("%d is a leap year \n", i);
    else if ((i % 100) == 0)
        printf("%d is a not leap year \n", i);
    else if ((i % 4) == 0)
        printf("%d is a leap year \n", i);
    else
        printf("%d is not a leap year \n", i);
}
