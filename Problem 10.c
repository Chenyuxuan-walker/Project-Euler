//Problem 10
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_prime(long long n) ;
int main()
{
    long long sum = 0 ;
    for(long long i = 2 ; i < 2000000 ; i++)
    {
        if(is_prime(i))
        {
            sum += i ;
        }
    }
    printf("%lld",sum);
}
bool is_prime(long long n)
{
    long long limit = (long long)sqrt(n) ;
    for(long long j = 2; j <=limit ; j++)
    {
        if(n%j==0)
        {
            return false ;
        }
    }
    return true ;
}