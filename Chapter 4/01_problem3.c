/* #include <stdio.h>

int main(){
    int age = 15;

    if(age<10){
        printf("we are inside if\n");
        printf("Your age is greater then 10\n");
    }

    else{
        printf("Your age is not greater than 10");
    }
return 0;
} */


#include <stdio.h>

int main(){
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    
    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    }
    else if (age>18){
        printf("You can drive");
    }
    else{
        printf("You are not eligible");
    }

return 0;
}

