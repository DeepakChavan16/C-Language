#include <stdio.h>

typedef struct employee
{
int code;
float salary;
char name[10];
}Emp;

int main(){
    Emp e1; // their is struct employee e1; instead of that i use Emp (typedef) 
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    
    printf("%d", (*ptr).code);
    
return 0;
}