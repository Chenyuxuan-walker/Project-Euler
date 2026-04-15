//Problem 6
#include<stdio.h>
long long square (int n)
{
    return n * n ;
}
int main()
{
    long long sum1 = 0 ;
    long long sum2 = 0 ;
    for(int i = 1 ; i <= 100 ; i++)
    {
        sum1 = sum1 + square (i) ;
    }
    for(int j = 1 ; j <=100 ; j++)
    {
        sum2 = sum2 + j ;
    }
    long long difference = sum2 * sum2 - sum1 ;
    printf("%lld", difference);
    return 0;
}