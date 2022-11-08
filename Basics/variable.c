#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char characterName[] = "Faizan Shaik";
    int characterAge = 70;
    printf("Hi, my name is %s\n", characterName);
    printf("and my age is %d\n", characterAge);

    characterAge = 100;
    printf("He did not like being %d\n", characterAge);
//You don't need to specify a variable's type if it has been specified already.
//If needed to change you can make the same variable without specifying or you could just edit the variable "int characterAge = 100"
    return 0;


}