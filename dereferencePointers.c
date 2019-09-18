#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    //When you dereference you are getting the actual value that is stored in memory address
    printf("%d\n", *&age);

    return 0;
}