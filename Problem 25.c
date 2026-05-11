//Problem 25
#include<stdio.h>
int main()
{
    int f1[1000] = {0} ;
    int f2[1000] = {0} ;
    int f3[1000] = {0} ;
    f1[0] = 1 ;
    f2[0] = 1 ;
    int digits = 1 ;
    int term = 2 ;
    while (digits < 1000 )
    {
        int carry = 0 ;
        for (int i = 0 ; i < digits ; i++)
        {
            int sum = f1[i] + f2[i] + carry ;
            f3[i] = sum % 10 ;
            carry = sum / 10 ;
        }
        if (carry > 0) 
        {
            f3[digits] = carry ;
            digits ++ ;
        }
        for (int i = 0 ; i < digits ; i++)
        {
            f1[i] = f2[i] ;
            f2[i] = f3[i] ;
        }
        term ++ ;
    }
    printf("The first term in the Fibonacci sequence to contain 1000 digits is %d" , term ) ;
    return 0 ;
}