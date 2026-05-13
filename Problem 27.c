//Problem 27
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_prime(int num) ;
int main()
{
    int b_candidates[200] ;
    int b_count = 0 ;
    for (int i = 2; i <= 1000 ; i++)
    {
        if(is_prime(i))
        {
            b_candidates[b_count] = i ;
            b_count ++ ;
        }
    }
    int max_primes_count = 0 ;
    int best_a = 0 ;
    int best_b = 0 ;
    for(int a = -999 ; a < 1000 ; a++)
    {
        for(int i = 0 ; i < b_count ; i++)
        {
            int b = b_candidates[i] ;
            int n = 0 ;
            while (is_prime(n*n+a*n+b))
            {
                n++ ;
            }
            if (n > max_primes_count)
            {
                max_primes_count = n ;
                best_a = a ;
                best_b = b ;
            }
        }
    }
    printf("Find the product of the coefficients a=%d , b=%d\n", best_a , best_b) ;
    printf("This formula n^2 + (%d)n + (%d) consecutively produces %d primes (n=0 to n=%d)\n",best_a,best_b,max_primes_count,max_primes_count-1);
    printf("The final answer is %d\n",best_a*best_b) ;
    return 0 ;
}
bool is_prime(int num)
{
    if (num<=1) return false ;
    if (num==2) return true ;
    if (num%2==0) return false ;
    int limit = (int)sqrt(num) ;
    for(int i = 3 ; i <= limit ; i+=2)
    {
        if(num%i==0)
        {
            return false ;
        }
    }
    return true ; 
}