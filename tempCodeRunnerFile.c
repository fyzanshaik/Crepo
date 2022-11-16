#include <stdio.h>
#include <stdlib.h>
//A function is basically a collection of code that performs a specific task.
int main()
{
    printf("Top");
    sayHi();   
    printf("Bottom");
    return 0;
}
//void doesn't return any information or data or value 
void sayHi(){
    printf("hello user");
}