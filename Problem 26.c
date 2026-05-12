#include<stdio.h>
int main()
{
    int longest_d = 0 ;
    int max_cycle_length = 0 ;
    for (int d = 2 ; d < 1000 ; d++)
    {
        int seen[1000] = {0} ;
        int remainder = 1 ; 
        int position = 1 ;
        while (remainder != 0 && seen[remainder] == 0)
        {
            seen[remainder] = position ;
            remainder = remainder * 10 ;
            remainder = remainder % d ;
            position ++ ;
        }
        if (remainder != 0)
        {
            int current_cycle_length = position - seen[remainder] ;
            if(current_cycle_length > max_cycle_length)
            {
                max_cycle_length = current_cycle_length ;
                longest_d = d ;
            }
        }
    }
    printf("The value of d < 1000 with the longest recurring cycle is: %d\n", longest_d);
    return 0 ;
}