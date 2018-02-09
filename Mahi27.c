#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int a, char **a)
{
    if (a < 2){
        printf ("Dont' forget to pass arguments!\n");
        return(-1);
    }

    printf ("You have executed the program : %s\n", a[0]);

    for(int i = 1; i < a; i++){
        if(strcmp(a[i],"--some_definite_parameter") == 0){
            printf("You have passed some definite parameter as an argument. And it is \"%s\".\n",a[i]);
        }
        else if(strspn(a[i], "0123456789") == strlen(a[i])) {
            size_t big_digit = 0;
            sscanf(a[i], "%zu%*c",&big_digit);
            printf("Your %d'nd argument conteins only digits, and it is a number \"%zu\".\n",i,big_digit);
        }
        else if(strspn(a[i], "0123456789abcdefghijklmnopqrstuvwxyz./") == strlen(a[i]))
        {
            printf("%s - this string might contein digits, small letters and path symbols. It could be used for passing a file name or a path, for example.\n",argv[i]);
        }
        else if(strspn(a[i], "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == strlen(a[i]))
        {
            printf("The string \"%s\" contains only capital letters.\n",a[i]);
        }
    }
}
