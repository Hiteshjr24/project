#include<stdio.h>
#include<string.h>

int get_1st_weekday(int day, int month, int year)
{
    if (month == 1)
    {
        month = 13;
        year--;
    }
    if (month == 2)
    {
        month = 14;
        year--;
    }
    int q = day;
    int m = month;
    int k = year % 100;
    int j = year / 100;
    int h = q + 13 * (m + 1) / 5 + k + k / 4 +
            j / 4 + 5 * j;
    h = h % 7;
    return h - 1;
}


void display_month(int monthnumber,int year)

{
    int day,weekDay;
    int monthdays [] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *monthname [] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int startingDay = get_1st_weekday(1, monthnumber, year);
    printf("\n\n---------------$ %s $-------------------\n", monthname[monthnumber-1]);
           printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

           for (weekDay = 0; weekDay < startingDay; weekDay++)
               printf("     ");

           for (day = 1; day <= monthdays[monthnumber-1]; day++)
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

void festival(int monthnumber)
{
    char *monthname [] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("\n");
    printf("\n");
    printf(" The festivals included in %s are \n ",monthname[monthnumber-1]);
    printf("------------------------------------\n");
    switch(monthnumber)
    {
        case 1: printf(" 1 : HAPPY NEW YEAR \n 12 : SWAMI VIVEKANAND JAYANTHI \n 14 : MAKARA SANKRANTHI \n 26 : REPUBLIC DAY \n 30 : GANDHI PUNYATHITHI \n");
            break;
        case 2: printf(" 14 : VALENTINE'S DAY \n 16 : VASANTH PANCHAMI \n");
            break;
        case 3: printf(" 11 : MAHA SHIVRATHRI \n 8 : WOMEN'S DAY \n 29 : HOLI \n 31 : CHATRAPATHI SHIVAJI JAYANTI \n ");
            break;
        case 4: printf(" 13 : UGADI \n 21 : RAMA NAVAMI \n 25 : MAHAVIR SWAMI JAYANTI \n ");
            break;
        case 5: printf(" 9 : INTERNATIONAL MOTHER'S DAY \n 17 : SURDAS JAYANTI \n");
            break;
        case 6: printf(" 5 : WORLD ENVIRONMENT DAY \n 13 : MAHARANA PRATAP JAYANTI \n 20 : INTERNATIONAL FATHER'S DAY \n 21 : INTERNATIONAL YOGA DAY AND ALSO THE LONGEST DAY OF THE YEAR");
            break;
        case 7: printf(" 24 : GURU POORNIMA \n ");
            break;
        case 8: printf(" 1 : INTERNATIONAL FRIENDSHIP DAY \n 15 : INDIAN INDEPENDENCE DAY \n 19 : MUHARRAM \n 21 : ONAM \n 22 : RAKSHA BANDHAN \n 30 : KRISHNA JANMASTAM \n ");
            break;
        case 9: printf(" 5 : TEACHER'S DAY \n 10 : GANESHA CHATURDESHI \n ");
            break;
        case 10: printf(" 2 : GANDHI JAYANTHI \n 13 : DURGA ASTHAMI \n 19 : EID-E-MILAD \n 14 : MAHA NAVAMI \n 24 : KARWA CHAUTH 20 : VALMIKI JAYANTHI \n ");
            break;
        case 11 : printf(" 4 : DEEPAVALI \n 14 : CHILDREN'S DAY \n 19 : GURU NANAK JAYANTHI \n");
            break;
        case 12: printf(" 25 : MERRY CHRISTMAS \n");
            break;
        default: printf("entered month is wrong\n");
            
    }
    printf("\n");
    printf("\n");
}


int main()
{
    int monthnumber,year;
    char display[20];
   
    printf("how do you want to view the calender: ");
    scanf("%s",&display);
    if(!strcmp(display , "year"))
    {
        printf("enter the year of the calender you want to visit: ");
        scanf("%d",&year);
        for(monthnumber = 1;monthnumber<13;monthnumber++)
        {
            display_month(monthnumber,year);
            festival(monthnumber);

            
        }

    }
    else if(!(strcmp(display,"month")))
    {
        printf("enter the month number you want to visit : ");
        scanf("%d",&monthnumber);
        printf("enter the year of the calender you want to visit: ");
        scanf("%d",&year);
        if(monthnumber <13)
        {
            display_month(monthnumber,year);
            festival(monthnumber);

        }
        else
            printf("entered month is incorrect\n");
        
    }
   
}
