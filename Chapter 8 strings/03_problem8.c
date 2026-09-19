// write a program to take string as an input from the user using %c and
// %s confirm that the string are equal.

#include <stdio.h>

int main(){
    char str[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[6] = '\0';
    printf("%s", str);
return 0;
}