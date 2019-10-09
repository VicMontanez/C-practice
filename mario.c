#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int height;
    printf("Enter a number 1-8 : ");
    scanf("%i", &height);

    if (height > 0 && height < 8)
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < height - 1 - i; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i + 1; k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        return 0;
    }
}