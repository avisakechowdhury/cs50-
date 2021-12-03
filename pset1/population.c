#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n ;
    do
    {
         n = get_int(" whats the initial population size ? ") ;
    }
    while ( n<9 );

    // TODO: Prompt for end size

    int m ;
    do
    {
        m = get_int (" Whats the end population size ? ");

    }
    while (m<n);


    // TODO: Calculate number of years until we reach threshold

    if ( n == m )
    {
        printf("Years: 0");
    }
    int y;
    for (y = 0 ; n < m ; y++ )
    {
        n =  n + (n/3) - (n/4) ;


    }

    // TODO: Print number of years

    printf("Years: %i", y);
}
