/**
 * -----------------------------------------------------------------------------
 * Program : 08_simCompInterest.c
 * Purpose : Find out Simple & Compound Interest with the given data
 * Authors : [Uday]
 * Date : Nov 07, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * (pow((1 + r / 100), t)) - p; // "pow()" function from "math" library is used for exponentation

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}