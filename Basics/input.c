#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);
    return 0;
}
//%lf for double, %d for integers, %c for single character 
//For strings use %s but specify variable[x] where x is the amount of space you want to allocate 
// or use * for unlimited
// For strings with spaces use "fgets" function to store sentences "fgets(variable name, no.of char, stdin);"