//write a program to change the value of a variable to Therty times of its current value.
#include<stdio.h>

void change_to_thirty_time(int*);

void change_to_thirty_time(int*a){
    *a = *a * 30;
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_thirty_time(&x);
    printf("The value of x is %d\n", x);

    return 0;
}