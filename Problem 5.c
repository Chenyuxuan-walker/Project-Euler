//Problem 5
#include<stdio.h>
//定义最大公因数的函数
long long gcd (long long a, long long b)
{
    return b == 0 ? a : gcd (b , a % b) ;
}
//定义最小公倍数的函数
long long lcm (long long a , long long b)
{
    return a * b / gcd (a, b) ;
}
int main()
{
    long long result = 1 ;
    for (int i = 1 ; i <= 20 ; i++)
    {
        result = lcm (result , i) ;
    }
    printf("%lld", result);
    return  0 ;
}