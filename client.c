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
