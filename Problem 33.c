//Problem 33
#include<stdio.h>
int gcd (int a , int b) ;
int main()
{
    int num_product = 1 ;
    int den_product = 1 ;
    for (int i = 10 ; i < 99 ; i++)
    {
        for (int j = i+1 ; j<= 99 ; j++ )
        {
            int n1 = i/10 , n0 = i%10 ;
            int d1 = j/10 , d0 = j%10 ;
            if (n0 == 0 & d0 == 0)
            {
                continue ;
            }
            if (n0 == d1 )
            {
                if (d0 != 0 && i*d0 == j*n1)
                {
                    printf("Find the digit cancelling fractions: %d/%d (simplify it as %d / %d)\n", i , j , n0 , d1) ;
                    num_product *= i ;
                    den_product *= j ;
                }
            }
        }
    }
    printf("------------------------------\n");
    printf("The product of four fractions is : %d / %d\n", num_product, den_product);
    int common_divisor = gcd(num_product, den_product);
    int final_numerator = num_product / common_divisor;
    int final_denominator = den_product / common_divisor;
    printf("The most simple fraction is: %d / %d\n", final_numerator, final_denominator);
    printf("The final denominator is: %d\n", final_denominator);
    return  0 ;
}
int gcd (int a , int  b)
{
    return b==0 ? a : gcd(b , a % b ) ;
}