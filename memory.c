#include <stdio.h>
#include <stdlib.h>

int main()
{
    //All values are stored in an address
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\nGpa: %p\nGrade: %p\n", &age, &gpa, &grade); //%p prints out physical memory address

    return 0;
}