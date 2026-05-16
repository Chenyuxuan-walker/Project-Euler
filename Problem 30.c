//Problem 30
#include<stdio.h>
int main()
{
    int power5[10] ;
    for (int i = 0 ; i <= 9 ; i++)
    {
        power5[i] = i * i * i * i ;
    }
    int total_sum = 0 ;
    int upper_bound = 35294 ;
    for (int i = 2 ; i <= upper_bound ; i++)
    {
        int temp = i ;
        int sum_of_digits = 0 ;
        while ( temp > 0 )
        {
            int digit = temp % 10 ;
            sum_of_digits += power5[digit] ;
            temp /= 10 ;
        }
        if (sum_of_digits == i) 
        {
            printf("Find numbers : %d\n" , i) ;
            total_sum += i ;
        }
    }
    printf("The sum of all the numbers that can be written as the sum of fifth powers of their digits is %d",total_sum) ;
    return 0 ;
}