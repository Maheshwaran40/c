#include <stdio.h>
#include<conio.h>
int main()
{
    char str[M];
    int i,w;
    printf("Enter any string: ");
    gets(str);
    i = 0;
    w = 1;
   while(str[i] != '\0')
    {       if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}
