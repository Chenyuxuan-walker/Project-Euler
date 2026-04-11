//Problem 2
#include<stdio.h>
long long Fibonacci (int n)
{
    long long a = 1;
    long long b = 2;
    long long c = 0;
    if (n==1)   return 1;
    if (n==2)   return 2;
    for (long long i=3;i<=n;i++)
    {
        c = a + b ;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    long long sum = 0;
    int j = 1;
    while(1)
    {
        long long current_fib = Fibonacci (j);
        if(current_fib > 4000000)
            break;
        else
            if(current_fib % 2 == 0)
                sum += current_fib;
        j++;
    }
    printf("%lld\n",sum);
    return 0;
}