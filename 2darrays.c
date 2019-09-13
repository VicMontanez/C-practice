#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] =
        {
            {1, 2}, {3, 4}, {5, 6}};
    // printf("%d", nums[0][0]);//will print 1
    printf("%d", nums[1][1]); //will print 4
    return 0;
}