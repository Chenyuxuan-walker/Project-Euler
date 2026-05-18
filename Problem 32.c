#include <stdio.h>
int is_pandigital(int a, int b, int c) {
    int counts[10] = {0}; 
    int nums[3] = {a, b, c};
    int total_digits = 0; 
    for (int i = 0; i < 3; i++) {
        int n = nums[i];
        while (n > 0) {
            int digit = n % 10; 
            if (digit == 0 || counts[digit] > 0) {
                return 0; 
            }           
            counts[digit] = 1; 
            total_digits++;    
            n /= 10;           
        }
    }
    return total_digits == 9;
}
int main() {
    int found_products[10000] = {0}; 
    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1234; j <= 9876; j++) {
            int prod = i * j;
            if (prod > 9999) break; 
            
            if (is_pandigital(i, j, prod)) {
                printf("Find the equation: %d x %d = %d\n", i, j, prod);
                found_products[prod] = 1; 
            }
        }
    }
    for (int i = 12; i <= 98; i++) {
        for (int j = 123; j <= 987; j++) {
            int prod = i * j;
            if (prod > 9999) break;
            
            if (is_pandigital(i, j, prod)) {
                printf("Find the equation: %d x %d = %d\n", i, j, prod);
                found_products[prod] = 1; 
            }
        }
    }
    for (int i = 1000; i < 10000; i++) {
        if (found_products[i] == 1) {
            sum += i;
        }
    }
    printf("------------------------------\n");
    printf("The sum of all products: %d\n", sum);
    return 0;
}