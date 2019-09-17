#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    //creating a pointer variable using a phyiscal memory address
    int *pAge = &age;

    double gpa = 3.4;
    //creating a pointer variable using a phyiscal memory address
    double *pGpa = &gpa;

    char grade = 'A';
    //creating a pointer variable using a phyiscal memory address
    char *pGrade = &grade;

    printf("age's memory address: %p\n", &age);

    return 0;
}