#include <stdio.h>

int factorial(int);
        // factorial means (5)= 1x2x3x4x5
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    // factorial(n) = factorial(n-1)xn
    return factorial(n-1)*n;
}
int main(){
    int a = 6;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}