//Problem 15
#include<stdio.h>
void solution_1() ;//Combinatorial Mathematics
void solution_2() ;//Dynamic Programming
int main()
{
    printf("--- Solution 1 (Math) ---\n");
    solution_1(); 
    printf("\n--- Solution 2 (DP) ---\n");
    solution_2(); 
}
void solution_1()
{
    int n = 20 ;
    unsigned long long routes = 1 ;
    for (int i = 1 ; i <= n ; i++)
    {
        routes = routes * (n+i) /  i ;
    }
    printf("For %d * %d lattice , there are: %llu paths", n , n , routes) ;
}
void solution_2()
{
    int n = 20 ;
    unsigned long long grid[21][21] ;
    for (int i = 0 ; i <= n ; i++)
    {
        grid[i][0] = 1 ;
        grid[0][i] = 1 ;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= n ; j++)
        {
            grid[i][j] = grid[i-1][j] + grid[i][j-1] ;
        }
    }
    printf("For %d * %d pattice , there are: %llu paths", n , n , grid[n][n] ) ;
}