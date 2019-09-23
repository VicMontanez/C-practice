#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    //read information from file
    FILE *fpointer = fopen("employees.txt", "r");

    //fgets allows you to read file line by line
    fgets(line, 255, fpointer); //reads first line
    fgets(line, 255, fpointer); //reads second line
    printf("%s", line);

    return 0;
}