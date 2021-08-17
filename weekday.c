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
