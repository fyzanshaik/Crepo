#include <stdio.h>
#include <stdlib.h>
//A function is basically a collection of code that performs a specific task.
int main()
{
    sayHi("Mike", 34);
    sayHi("Faizan Shaik", 30); 
    sayHi("Shivi", 89);
    return 0;
}
//void doesn't return any information or data or value 
void sayHi(char name[], int age){
    printf("\nhello %s and you are %d years old\n\n", name, age);
}