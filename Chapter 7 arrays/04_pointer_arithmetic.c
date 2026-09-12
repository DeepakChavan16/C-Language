#include <stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;  // because in this architecutre it takes 4 byts of memory location
            // if the is character pointer the value will be increment by 1 only
    printf("The value of ptr is %u\n", ptr);
return 0;
}