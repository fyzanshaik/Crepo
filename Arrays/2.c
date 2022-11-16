#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    number[2] = 999;
    //here we are changing one element from the data set by using its index number
    printf("%d", number[2]);

    return 0;
}