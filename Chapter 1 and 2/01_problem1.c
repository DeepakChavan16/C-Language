// A) Find the area of the rectangle and B) Take input from user l and b 
// C) Find the are of circle, take the input from user. D) Find the Total surface area of the cylinder take input from user
#include <stdio.h>

int main(){
    float height;
    float length, breadth;
    float radius;

    printf("Enter the radius of circle :");
    scanf("%f", &radius);

    printf("The area of circle is %f: \n", 3.14*radius*radius);

    printf("Enter the height of cylinder : \n");
    scanf("%f", &height);
    printf("Enter the radius of the cylinder: \n");
    scanf("%f", &radius);

    printf("The Total surface area of the Cylinder is %f: \n", 2*3.14*radius*(radius+height));
    
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);
    
    printf("The are of the rectangle is %f", length*breadth);

    return 0;
}