//Problem 19
#include<stdio.h>
int is_leap_year (int year) ;
int main()
{
    int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31} ;
    int current_day = 1 ;
    int sunday_count = 0 ;
    for(int year = 1900 ; year <= 2000 ; year ++)
    {
        for (int month = 1 ; month <=12 ; month ++)
        {
            if (year >= 1901 && current_day == 0)
            {
                sunday_count++ ;
            }
            int days = days_in_month[month] ;
            if (month == 2 && is_leap_year(year))
            {
                days = 29 ;
            }
            current_day = (current_day+days)%7 ;
        }
    }
    printf("In 21st century , there are %d Sundays that falls on 1th\n" , sunday_count) ;
    return 0 ;
}
int is_leap_year (int year)
{
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1 ;
}