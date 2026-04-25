//problem 16
#include<stdio.h>
void print_array (int size ,int nums[]) ;
int main()
{
    int digits[500] = {0} ;
    digits[0] = 1 ;
    for (int i = 0 ; i < 1000 ; i++)
    {
        int remainder = 0 ;
        for (int j = 0 ; j < 500 ; j++)
        {   
            int product = digits[j]*2+remainder ;
            digits[j] = product % 10; 
            remainder = product / 10;
        }
    }
    printf("The power digit is\n") ;
    print_array(500 , digits) ;
    int sum = 0 ;
    for (int i = 0 ; i < 500 ; i++)
    {
        sum += digits[i] ;
    }
    printf("The sum of this power digit is %d \n", sum) ;
    return 0 ;
}
void print_array(int size , int nums[])
{
    int start = size - 1 ;
    while(start>0&&nums[start]==0)
    {
        start-- ;
    }
    while(start >= 0)
    {
        printf("%d",nums[start]) ;
        start -- ;
    }
    printf("\n") ; 
}