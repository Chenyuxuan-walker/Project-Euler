//Problem 24
#include<stdio.h>
unsigned long long factorial(int n) ;
int main()
{
    int fact[10] ;
    for(int i = 0 ; i < 10 ; i++)
    {
        fact[i] = factorial(i) ;
    }
    int available_digits[10] ;
    for(int i = 0 ; i < 10 ; i++)
    {
        available_digits[i] = i ;
    }
    int target = 999999 ;
    printf("The millionth lexicographic permutation of the digits is ");
    for (int i = 9; i >= 0; i--) 
    {
        int index = target / fact[i]; 
        printf("%d", available_digits[index]);
        for (int j = index; j < 9; j++) {
            available_digits[j] = available_digits[j + 1];
        }
        target = target % fact[i]; 
    }
    printf("\n");
    return 0;
}
unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1; 
    }
    return n * factorial(n - 1); 
}