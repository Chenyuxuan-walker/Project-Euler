#include<stdio.h>
int main()
{
    int units[] = {0,3,3,5,4,4,3,5,5,4} ;
    int teens[] = {3,6,6,8,8,7,7,9,8,8} ;
    int tens[] = {0,0,6,6,5,5,5,7,6,6} ;
    int total_letters = 0 ;
    for (int i = 1 ; i <= 1000 ; i++)
    {
        int n = i ;
        if(n = 1000)
        {
            total_letters += 11 ;
            continue ;
        }
        if (n>=100)
        {
            int hundred_digit = n / 100 ;
            total_letters += units[hundred_digit] + 7 ;
            if (n%100 != 0)
            {
                total_letters += 3 ;
            }
            n %= 100 ;
        }
        if (n >= 20)
        {
            total_letters += tens[n/10] ;
            total_letters += units[n%10] ;
        }
        else if (n >= 10)
        {
            total_letters += teens[n-10] ;
        }
        else
        {
            total_letters += units[n] ;
        }
    }
    printf ("If all the numbers from 1 to 1000 inclusive were written out in words , %d letters would be used" , total_letters) ;
    return 0 ;
}