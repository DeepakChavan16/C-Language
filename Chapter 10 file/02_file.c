#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("ex.txt", "w");
    int num = 4235;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    
return 0;
}