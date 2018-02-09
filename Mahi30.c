#include <stdio.h>
struct TIME
{
  int s;
  int m;
  int h;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;
    printf("Enter start time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.h, &startTime.m, &startTime.s);
    printf("Enter stop time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.h, &stopTime.m, &stopTime.s);
    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.s > start.s){
        --start.m;
        start.s += 60;
    }

    diff->s = start.s - stop.s;
    if(stop.m > start.m){
        --start.h;
        start.m += 60;
    }
    diff->m= start.m - stop.m;
    diff->hours = start.hours - stop.hours;
}
