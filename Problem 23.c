//Problem 23
#include<stdio.h>
#include<stdbool.h>
#define LIMIT 28123
int sum_of_divisors(int n) ;
int main()
{
    int abundant_nums[LIMIT] ;
    int count = 0 ;
    bool can_be_written_as_sum[LIMIT+1] = {false} ;
    for (int i = 12 ; i<= LIMIT ; i++)
    {
        if(sum_of_divisors(i)>i)
        {
            abundant_nums[count] = i ;
            count ++ ;
        }
    }
    for (int i = 0 ; i < count ; i++)
    {
        for(int j = i ; j < count ; j++)
        {
            int sum = abundant_nums[i] + abundant_nums[j] ;
            if (sum <= LIMIT)
            {
                can_be_written_as_sum[sum] = true ;
            }
            else
            {
                break ;
            }
        }
    }
    long long total_sum = 0 ;
    for(int i = 1 ; i <= LIMIT ; i++)
    {
        if(!can_be_written_as_sum[i])
        {
            total_sum += i ;
        }
    }
    printf ("The sum of all the positive integers which cannot be written as the sum of two abundant numbers is %lld" , total_sum) ;
}
int sum_of_divisors(int n)
{
    int sum = 1 ;
    for (int i = 2 ; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            sum += i ;
            if(i*i != n)
            {
                sum += n/i ;
            }
        }
    }
    return sum ;
}