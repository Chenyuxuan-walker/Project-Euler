//Problem 9
#include<stdio.h>
int main()
{
    int a , b , c ;
    for(a = 1 ; a < 332 ; a++)
    {
        for(b=a+1 ; b < 500 ; b++)
        {
            c = 1000 - a - b ;
            if(a*a+b*b==c*c)
            {
                printf("%d,%d,%d\n",a,b,c);
                long long mutiple = (long long)a*b*c;
                printf("%lld",mutiple);
                break ;
            }
        }
    }
    return 0;
}