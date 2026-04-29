#include<stdio.h>
#define MAX_DIGITS 200
int digits[MAX_DIGITS] = {0} ;
int length = 1 ;
void multiply(int n) ; 
void factorial_recursive(int n) ;
int sum_digits_recursive (int index) ;
int main()
{
    int n = 100 ;
    factorial_recursive(n) ;
    int total_sum = sum_digits_recursive(0) ;
    printf("%d! factorial digit sum : %d\n" , n , total_sum) ;
    return 0 ;
}
void multiply(int n)
{
    int carry = 0 ;
    for(int i = 0 ; i < length ; i++)
    {
        int product = digits[i]*n + carry ;
        digits[i] = product % 10 ;
        carry = product / 10 ;
    }
    while (carry > 0)
    {
        digits[length] = carry % 10 ;
        carry = carry / 10 ;
        length ++ ;
    }
}
void factorial_recursive(int n)
{
    if (n <= 1)
    {
        digits[0] = 1 ;
        length = 1 ;
        return ;
    }
    factorial_recursive(n-1) ;
    multiply(n) ; 
}

int sum_digits_recursive(int index)
{
    if(index >= length)
    {
        return 0 ;
    }
    return digits[index] + sum_digits_recursive(index+1) ;
}