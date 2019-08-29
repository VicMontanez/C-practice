#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%f", 8.9);
    printf("%f", 5.0 + 4.5);     //addition
    printf("%f", 5 + 4.5);       //a integer and float will return a float
    printf("%d", pow(2, 3));     //will give a number raised to the second number; 2^3
    printf("%f", sqrt(36));      //prints out the square root
    printf("%f", ceil(36.356));  //will round off the number to next highest integer
    printf("%f", floor(36.656)); //will round the number down

    return 0;
}