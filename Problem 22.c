#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAMES 6000    
#define MAX_NAME_LEN 50   
char names[MAX_NAMES][MAX_NAME_LEN];
int name_count = 0; 
int compare_strings(const void *a, const void *b) 
{
    return strcmp((const char *)a, (const char *)b);
}
int get_alphabetical_value(const char *name) 
{
    int sum = 0;
    for (int i = 0; name[i] != '\0'; i++) 
    {
        sum += (name[i] - 'A' + 1);
    }
    return sum;
}
int main() 
{
    FILE *fp = fopen("../names.txt", "r");
    if (fp == NULL) 
    {
        printf("Error\n");
        return 1;
    }
    int c;
    int char_index = 0;
    while ((c = fgetc(fp)) != EOF) 
    {
        if (c == '"') 
        {
            continue; 
        } else if (c == ',') 
        {
            names[name_count][char_index] = '\0'; 
            name_count++;                         
            char_index = 0;                       
        } else 
        {
            names[name_count][char_index] = (char)c; 
            char_index++;
        }
    }
    if (char_index > 0) 
    {
        names[name_count][char_index] = '\0';
        name_count++;
    }
    fclose(fp);
    qsort(names, name_count, MAX_NAME_LEN, compare_strings);
    long long total_score = 0; 
    for (int i = 0; i < name_count; i++) 
    {
        int alphabetical_value = get_alphabetical_value(names[i]);
        int position = i + 1; 
        long long current_name_score = (long long)alphabetical_value * position;
        total_score += current_name_score;
    }
    printf("Total names processed: %d\n", name_count);
    printf("The total of all the name scores is: %lld\n", total_score);
    return 0;
}