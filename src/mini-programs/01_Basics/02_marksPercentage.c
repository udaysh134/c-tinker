/**
 * -----------------------------------------------------------------------------
 * Program : 02_marksPercentage.c
 * Purpose : Calculate the Total Marks and Percentage obtained from the provided scores
 * Authors : [Uday]
 * Date : Nov 05, 2025
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, sum, per;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    per = (sum / 500) * 100; // Basic arithmetic to find percentage

    printf("Total Marks = %.2f\n", sum);
    printf("Percentage = %.2f%%\n", per);

    return 0;
}