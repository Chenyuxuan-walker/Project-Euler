//Problem 7
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool is_prime (long long n) ;
int main()
{
    int target_count = 10001 ;
    int current_count = 0 ;
    long long num = 1 ;
    while (current_count < target_count)
        {
            if(is_prime(num))
                {
                    current_count++;
                }
            num++ ;
        }
    printf("%lld\n",num-1) ;
    return 0 ;
}
bool is_prime (long long n)
{
    if (n < 2)
        return false ;
    long long limit = (long long)sqrt(n) ;
    for (long long i = 2 ; i <= limit ; i++)
    {
        if (n % i == 0)
            return false ;
    }
    return true ;
}