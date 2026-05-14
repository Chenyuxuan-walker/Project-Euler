//Problem 28
#include<stdio.h>
int main()
{
    long long total_sum = 1 ;
    for (int i = 3 ; i <=1001 ; i+=2)
    {
        long long current_sum = 4 * i * i - 6 * i + 6 ;
        total_sum += current_sum ;
    }
    printf("The sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way is %lld",total_sum) ;
    return 0 ;
}