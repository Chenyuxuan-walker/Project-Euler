#include<stdio.h>
#include<stdbool.h>
/*判断质数
bool isprime(long long num)
{
    if(num<=1)
        return false;
    for(long long i=2; i<num ; i++)
        {
            if(num % i == 0)
                {
                    return false ;
                    break ;
                }
        }
        return true ;
}
int main()
{
    long long j = 1;
    for()
}
*/
int main()
{
    long long n = 600851475143LL; 
    long long i = 2; 
    while(n>1)
    {
        if (n%i==0)
            n = n/i;
        else
            i++;
    }
    printf("%lld\n",i);
    return 0;
}