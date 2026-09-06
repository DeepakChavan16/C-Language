//decrementing using for loop and take the value from user
#include <stdio.h>

int main(){
    int m;
    printf("Enter the value of n:",m);
    scanf("%d",&m);
    for (int i = m; i; i--)
    {
        printf("%d\n",i);
    }
    
return 0;
}