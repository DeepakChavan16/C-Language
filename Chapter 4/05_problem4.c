//WAP to calculate the sum of the numbers occuring in the multiplication table 
// of user entered number and take user input.
#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the no. of table which you want to do sum:");
    scanf("%d", &n);
    for(int i = 1; i<=10; i++){
        sum += (n*i);
    }
    printf("The sum of the table is %d", sum);
return 0;
}