#include <stdio.h>

// Function declaration
int add(int a, int b);

int main()
{
    int x = 10;
    int y = 20;
    int result;

    // Function call
    result = add(x, y);

    printf("Sum = %d", result);

    return 0;
}

// Function definition
int add(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}