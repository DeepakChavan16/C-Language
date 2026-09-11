#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The vakue of marks ar index %d is %d\n", i, marks[i]);        
    }

    printf("Marks 0 and Marks 1 is %d\n", marks[0],marks[1]);
        
return 0;
}