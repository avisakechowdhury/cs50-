#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float coin;

    do
    {
        coin = get_float(" Write the coins owed ? ");
    }
    while (coin <= 0);

    int cents = round(coin * 100);

    int count = 0;

    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents = cents - 25 ;
            count ++ ;
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
            count ++ ;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            count++;
        }
        else
        {
            cents -= 1 ;
            count ++;
        }
    }


    printf("%i\n", count );

}
