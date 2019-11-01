#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; 
    do{
     n = get_int("Height:");} /*declaring height number*/
    while(n < 0||n > 23); /*height between 0 and 23*/
    
    for (int i = 0; i < n ; i++) /*declaring number of rows due to height number*/
    {
        for (int j = 0; j < n - 1 - i ; j++) /*declares spaces in each row*/
        printf(" "); 
    for(int j = 0; j < i+1; j++) /*declares # in each row*/
    {
        printf("#");
    }
    printf("\n");
}
}
