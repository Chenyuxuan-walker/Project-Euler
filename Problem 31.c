#include<stdio.h>
int main()
{
    int target = 200 ;
    int coins[] = {1,2,5,10,20,50,100,200} ;
    int num_coins = 8 ;
    int ways[201] = {0} ;
    ways[0] = 1 ;
    for (int i = 0 ; i < num_coins ; i++ )
    {
        int current_coin = coins[i] ;
        for (int j = current_coin ; j <= target ; j++)
        {
            ways[j] = ways[j] + ways[j-current_coin] ; 
        }
    }
    printf("There are %d ways can 2 pounds be made using any number of coins\n" , ways[target]) ;
    return 0 ;
}