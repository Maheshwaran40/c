
#include <stdio.h>

void main()

{

    int i,m =20,n=40;

    clrscr();

    printf("Print Odd Numbers in a given range m to n:\n");

    for (i = m; i <= n; i++)

        {

               if (i% 2 == 1)

                  printf ("%d ", i);

         }

                getch();
