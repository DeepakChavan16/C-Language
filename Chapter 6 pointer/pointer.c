#include <stdio.h>

int main(){
    char k = 'A';
    char * k1 = &k; //is pointing to char
    float n = 6.143;
    float *n1 = &n; // is pointing to float
    int i = 53;
    int*j = &i; // j is a pointer pointing to int
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", j);
    printf("The value at address i is %d\n", *j);
    printf("The address of n is %p\n", &n);
    printf("The address of n is %u\n", n1);
    printf("The value at address n is %.2f\n", *n1);
    printf("The address of k is %p\n", &k);
    printf("The address of k is %u\n", k1);
    printf("The value at address k is %c\n", *k1);
return 0;
}