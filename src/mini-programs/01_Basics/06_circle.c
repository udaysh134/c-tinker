/**
 * -----------------------------------------------------------------------------
 * Program : 06_circle.c
 * Purpose : Calculate the area and circumference of a circle
 * Authors : [Uday]
 * Date : Nov 06, 2025
 * -----------------------------------------------------------------------------
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