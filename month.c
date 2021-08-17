#include <stdio.h>
#include "server.h"

void display_month(int monthnumber, int year)

{
    int day, weekDay;
    int monthdays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthname[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int startingDay = get_1st_weekday(1, monthnumber, year);
    printf("\n\n---------------$ %s $-------------------\n", monthname[monthnumber - 1]);
    printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

    for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");

    for (day = 1; day <= monthdays[monthnumber - 1]; day++)
    {
        printf("%5d", day);

        if (++weekDay > 6)
        {
            printf("\n");
            weekDay = 0;
        }
        startingDay = weekDay;
    }
    printf("\n");
}