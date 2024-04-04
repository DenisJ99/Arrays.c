#include <stdio.h>

int main(){

    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;
    prices[4] = 20.0;

    printf("$%.2lf", prices[4]);

    return 0;
}

// Array = A data structure that can store many value of the same data type