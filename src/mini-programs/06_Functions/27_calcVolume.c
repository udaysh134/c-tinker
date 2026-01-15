/**
 * -----------------------------------------------------------------------------
 * Program : 27_calcVolume.c
 * Purpose : Calculate the volume of Cube, Cuboid and Cylinder using functions.
 * Authors : [Uday]
 * Date : Jan 15, 2026
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <math.h>

// Function Declaration and definition
float volumeCube(float a) {
    return a * a * a;
}

float volumeCuboid(float l, float b, float h) {
    return l * b * h;
}

float volumeCylinder(float r, float h) {
    return 3.1416 * r * r * h;
}


int main() {
    float a, l, b, h, r;
    int choice;

    // Display shape menu
    printf("1. Cube\n2. Cuboid\n3. Cylinder\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Input and calculate cube volume
            printf("Enter side of cube: ");
            scanf("%f", &a);
            printf("Volume of cube = %.2f\n", volumeCube(a));
            break;
        case 2:
            // Input and calculate cuboid volume
            printf("Enter length, breadth and height of cuboid: ");
            scanf("%f %f %f", &l, &b, &h);
            printf("Volume of cuboid = %.2f\n", volumeCuboid(l, b, h));
            break;
        case 3:
            // Input and calculate cylinder volume
            printf("Enter radius and height of cylinder: ");
            scanf("%f %f", &r, &h);
            printf("Volume of cylinder = %.2f\n", volumeCylinder(r, h));
            break;

        default:
            // Handle invalid choice
            printf("Invalid choice.\n");
    }

    return 0;
}