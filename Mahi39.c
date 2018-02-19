#include <stdio.h>
#include <string.h>
int main()
{
    char ch[30];
    char *c[3];
    long int i[3], x_2;
    int o;
    while((fgets(ch,sizeof(ch),stdin))&&ch!='\0')
    {
        c[0] = (char *)malloc(10);
        c[1] = (char *)malloc(10);
        c[2] = (char *)malloc(10);
        c[0] = strtok(ch," ");
        c[1] = strtok(NULL," ");
        c[2] = strtok(NULL," ");
        i[0] = atoi(c[0]);
        i[1] = atoi(c[1]);
        i[2] = atoi(c[2]);
        mx_2 = i[0] > i[1] ? (i[0] >i[2] ? i[0] : i[2]) : (i[1] > i[2] ? i[1] : i[2]);
        printf("%ld\n",x_2);
        fflush(stdin);
        for (o = 0; o < 3; o++) {
            free(c[o]);
        }
    }

    return 0;
}
