#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 22, 22, 34};
    //                   {0  1  2   3   4   5} index positions to print "4" we need to specift it's position which is 0
    // int(specifying data type) luckynumber(variable Name) "[]"(we use this to specify that we are storing many values)
    printf("%d", luckyNumbers[0]);
    //here we are specifying what to print out from the created array data structure 'variable name[index value]';


    return 0;
}