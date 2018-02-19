#include<stdio.h>
#include<conio.h>
int main()
{
int i,o ;
printf(“Enter any two numbers: “);
scanf(“%d%d”, &i, o);

printf(“Original value of i = %d\n”, i);
printf(“Original value of o= %d\n”, o);

i ^= o;
o^= i;
i^= o;

printf(“Num1 after swapping = %d\n”, i);
printf(“Num2 after swapping = %d\n”, o);

return 0;
}
