#include <stdio.h>
#include<conio.h>
int main(int c, char *v[])
{
    int i = 0
    if (c == 1)
    {
        printf("\n No sentence given on command line");
        return;
    }
    else
    {
        printf("\nThe words in the sentence are:");
        for (i = 1;i < c;i++)
        {
            printf("\n%s", v[i]);
         }
        printf("\n\nTotal number of words:");
        printf(" %d", c-1);
    }
}
