#include<stdio.h>
int main()
{
    int visited[101] = {0} ;
    int total_distinct = 0 ;
    for (int a = 2 ; a <= 100; a++)
    {
        if(visited[a] == 1)
        {
            continue ;
        }
        int max_power = 0 ;
        int current_val = a ;
        while (current_val <= 100)
        {
            visited[current_val] = 1 ;
            max_power ++ ;
            current_val = current_val * a ;
        }
        int seen_exponents[601] = {0} ;
        int unique_in_this_family = 0 ;
        for (int i = 1 ; i<= max_power ; i++)
        {
            for (int j = 2 ; j<= 100 ; j++)
            {
                int exp = i * j ;
                if(seen_exponents[exp]==0)
                {
                    seen_exponents[exp] = 1 ;
                    unique_in_this_family++ ;
                }
            }
        }
        total_distinct = total_distinct +unique_in_this_family ;
    }
    printf("Distinct terms  in the sequence generated are %d" , total_distinct) ;
    return 0 ;
}