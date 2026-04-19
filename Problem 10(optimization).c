//Prolem 10 (optimization) : This project takes advantage of Sieve of Eratosthenes
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    long long limit = 2000000 ;
    bool *is_prime = (bool*)malloc(limit *sizeof(bool)) ; 
    for(long long i = 2 ; i < limit ; i++ )
    {
        is_prime[i] = true ;
    } 
    for(long long i = 2 ; i * i < limit ; i++)
    {
        if(is_prime[i]==true)
        {
            for(long long j = i*i ; j < limit ; j+=i)
            {
                is_prime[j] = false ;
            }
        }
    }
    long long sum = 0 ;
    for(long long i = 2 ; i < limit ; i++)
    {
        if(is_prime[i]==true)
        {
            sum+=i;
        }
    }
    printf("%lld\n",sum);
    free(is_prime);
    return 0 ;
}