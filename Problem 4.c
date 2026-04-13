//Problem 4
#include<stdio.h>
#include<stdbool.h>
//定义判断回文数的函数
bool is_parlindrome(int num)
{
    int original = num ;
    int reverse = 0;
    while (num > 0)
    {
        int remainder = num % 10 ;
        reverse = reverse * 10 + remainder ;
        num /= 10 ;
    }
    if (original == reverse)
        return true ;
    else 
        return false ;
}
int main()
{
    long long max_product = 0;
    int best_i;
    int best_j;//方便以后记录i,j的值
    for( int i = 999 ; i>=100 ; i--)//从大往小取
    {
        for( int j = i ; j>=100 ; j--)
            {
                long long product = i * j ;
                if(product < max_product)//如果小的话就自动退出循环
                    break ;
                if (is_parlindrome(product))//判断是否为回文数
                    {
                        max_product = product ;
                        best_i = i;
                        best_j = j;
                    }
            }
    }
    printf ("%lld=%d*%d", max_product,best_i,best_j);//输出回文数表达式
    return 0;
}