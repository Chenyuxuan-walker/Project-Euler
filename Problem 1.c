//Problem 1
#include<stdio.h>
long long sum_of_multiples(int n, int limit)
{
    //定义公差n,上限limit,项数为p
    int p = limit / n;
    //利用等差数列求和公式
    return  p*(2*n+(p-1)*n)/2;
}
int main()
{
    long long sum1 = sum_of_multiples(3,999);//求3的倍数和
    long long sum2 = sum_of_multiples(5,999);//求5的倍数和
    long long sum3 = sum_of_multiples(15,999);//求15的倍数和
    long long sum = sum1 + sum2 - sum3 ;
    printf("%lld\n",sum);
    return 0;
}