//Problem 12
#include<stdio.h>
//define a function that calculates how many divisors of a number
int count_divisors (long long number) ;
int main()
{
    long long n = 1 ;
    long long triangular_num = 0 ;
    while(1)
    {
        triangular_num += n ;
        int divisors = count_divisors (triangular_num) ;
        if (divisors > 500 )
        {
            printf ("The %lld th triangular number %lld has over five hundred divisors" , n , triangular_num) ;
            break ;
        }
        n ++ ;
    }
    return 0 ;
}
int count_divisors (long long number) 
{
    int count = 0 ;
    for(long long i = 1 ; i * i <= number ; i++)
    {
        if (number % i == 0)
        {
            count ++ ;
            if (i * i != number)
            {
                count ++ ;
            }
        }
    }
    return count ;
}