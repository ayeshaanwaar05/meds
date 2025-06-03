#include <stdio.h>

double sqrt(double x) {
    if (x < 0) {
        printf("Cannot compute square root of a negative number.\n");
        return -1;
    }

    if (x == 0) return 0;

    double guess = x / 2.0;
    double epsilon = 1e-10;

    while ((guess * guess - x > epsilon) || (x - guess * guess > epsilon)) {
        guess = (guess + x / guess) / 2.0;
    }

    return guess;
}

int main() {
    double num = 25.0;
    printf("Square root of %.2f is %.10f\n", num, sqrt(num));
    num = 2.0;
    printf("Square root of %.2f is %.10f\n", num, sqrt(num));
    return 0;
}
