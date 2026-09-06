//WAP using function to find average of three numbers.
#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return(a+b+c)/3.0;
}
int main(){
    int a = 1, b = 2, c = 3;
    printf("The average of a, b and c is %f", average(a,b,c));
return 0;
}