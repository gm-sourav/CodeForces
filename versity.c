#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001

// Function: f(x) = x^2 - 2
double f(double x) {
    return x * x - 2;
}

// Function for False Position Method
double falsePosition(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval. f(a) and f(b) must have opposite signs.\n");
        return -1;
    }

    double c = a; // Approximation
    int iteration = 1;

    printf("Iter\t a\t\t b\t\t c\t\t f(c)\n");
    while (fabs(b - a) >= EPSILON) {
        // Formula: c = (a*f(b) - b*f(a)) / (f(b) - f(a))
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        printf("%d\t %.6f\t %.6f\t %.6f\t %.6f\n", iteration, a, b, c, f(c));

        if (f(c) == 0.0) {
            break; // root found exactly
        }
        else if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
        iteration++;
    }
    return c;
}

// Main function
int main() {
    double a, b, root;

    // Interval selection for x^2 - 2 = 0 → root = √2 ≈ 1.414
    a = 1;  
    b = 2;  

    root = falsePosition(a, b);

    if (root != -1)
        printf("\nApproximate Root = %.6f\n", root);

    return 0;
}