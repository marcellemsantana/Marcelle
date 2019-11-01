#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)

    { 
    float n = -1;
    int z = 0;
    int counter = 0;
    do
{
    printf("Input money amount\n");
    n = get_float("Cash: " );
} 
    while (n< 0);
    n = n * 100;
    n = round(n);
    z = n;
    while (z >= 25) {
        z = z - 25;
    counter++;
    }
    while (z >= 10) {
        z = z -10;
    counter++;
    }
    while (z >= 5)
    {
        z = z - 5 ;
    counter++;
    }
    while (z >= 1) 
    {
        z = z -1 ;
    counter++;
    }   
    printf("Minimum coins needed: %d\n", counter);
    
}
