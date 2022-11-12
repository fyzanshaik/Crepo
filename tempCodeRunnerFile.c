#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[90];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your grade is %s", name);
    
    return 0;
}