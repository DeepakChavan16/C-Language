//break statement for loop
#include <stdio.h>

int main(){
    int m;
    printf("Enter the value of n:",m);
    scanf("%d",&m);
    for (int i = 0; i<m; i++)
    {
        if (i==6)
        {
            continue; // skip this loop now!
        }
        
        printf("%d\n",i);
    }
    printf("For loop is end");
    
return 0;
}