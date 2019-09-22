#include <stdio.h>
#include <stdlib.h>

int main()
{

    //FILE TYPES r = read, w = write, a = append
    // FILE * fpointer = fopen("employees.txt", "w");

    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accoutning");

    // fclose(fpointer);

    //this appends to the employee file, because writing will override it
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);

    return 0;
}