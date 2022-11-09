#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int NUM = 5;
    printf("%d", NUM);
    //The below code wont run and throw an error because "const" means a constant when we declare it right before/after a variable it means we can not change it further
    // num = 8;
    // printf("%d", num);

    return 0;
}