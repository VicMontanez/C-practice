#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("You are %d years old\n", age);

    // double gpa;
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa);
    // printf("Your gpa is %f\n", gpa);

    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c", &grade);
    // printf("Your grade is %c\n", grade);

    // char name[20]; //be able to store 20 characters
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Your name is %s\n", name);

    char name[20]; //be able to store 20 characters
    printf("Enter your name: ");
    fgets(name, 20, stdin); //grabs a whole line of text or multiple words with spaces
    printf("Your name is %s\n", name);

    return 0;
}