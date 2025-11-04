/*
----------------------------------------------------------------------------------------------------
Calculating the Area and Circumference of a circle
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#define PI 3.1416

int main() {
    float r, area, circum;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    // Applying formula of Area and Circumference
    area = PI * r * r;
    circum = 2 * PI * r;

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circum);
    
    return 0;
}