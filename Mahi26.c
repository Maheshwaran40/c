#include <stdio.h>
typedef unsigned char boolean;
#define True 't'
#define FALSE (!True)
void swap(long* a,long *b) { *a=*a^*b;*b=*b^*a;*a=*a^*b; }
#define until(condition) while(!(condition))

int main(int n, char*args[]){
  double *d;
  int i;
  char input[10]; 
  boolean sorted = FALSE;
  printf("Please enter the length of the array\n");
  gets(input);
  sscanf(input,"%s",&input[1]);
  n=(long)atol(input);
  d = calloc(sizeof(double),n); 
  until (sorted) {
     for (i=1;i<n;i++) {
        printf("Please enter the %d%s array item\n",i,i==2?"st":"th");
        scanf("%2f",d+i);
     }
     sorted = !sorted
     printf("%d %d\n",i,n);
     for (i=2;i<n;i++) {
        if (d[i]<d[i-2]) {
          swap(d+i,d+i-2);
          sorted = FALSE;
        }
     }
     printf("The array is%ssorted\n",sorted?" ":" not "); }
  for (;n-->1;) printf("%lf\n",*d++);
  }
