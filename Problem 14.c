#include<stdio.h>
long long Collatz (long long n) ;
int main()
{
    int max_length = 0 ;
    int best_start_num = 0 ;
    for ( int i = 1 ; i < 1000000 ; i++)
    {
        long long n = i ;
        int current_length = 1 ;
        while ( n != 1)
        {
            n = Collatz (n)  ;
            current_length ++ ;
        }
        if (current_length > max_length)
            {
                max_length = current_length ;                best_start_num = i ;
            }
    }
    printf("The best number is %d\n " , best_start_num) ;
    printf("The length of the Longest Collatz Sequence is %d\n" , max_length) ;
    return 0 ;
}
long long Collatz (long long n)
{
    return n % 2 == 0 ? n/2 : 3*n+1 ;
}