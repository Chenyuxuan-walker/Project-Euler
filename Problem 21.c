//Problem 21
#include<stdio.h>
#include<math.h>
int sum_of_proper_divisors (int n) ;
int main()
{
    int total_sum = 0 ;
    for (int a = 2 ; a < 10000 ; a++)
    {
        int b = sum_of_proper_divisors(a) ;
        if( a!= b && sum_of_proper_divisors(b)== a)
        {
            total_sum+=a ;
        }
    }
    printf("The sum of all the amicable numbers is %d" , total_sum) ;
    return 0 ;
}
int sum_of_proper_divisors (int n)
{
    int sum = 1 ; 
    int limit = sqrt(n) ;
    for (int i = 2 ; i <= limit ; i++)
    {
        if( n % i == 0)
        {
            sum += i  ;
            if( i != n / i)
            {
                sum += n / i ;
            }
        }
    }
    return sum ;
}