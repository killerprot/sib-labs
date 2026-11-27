#include <stdio.h>

double sin(double x) {
    double term = x;
    double sum = x;
    double x2 = x * x;

    for (int i = 1; i <= 100; i++) {
        double denom = (2 * i) * (2 * i + 1);
        term = -term * x2 / denom;
        sum += term;
    }
    return sum;
}

double calc(double a, double b) {
    return sin(a * b) / (a + b);
}

int main(void) {
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2) {
        double res = calc(a, b);
        printf("%.4f\n", res);
    }

    return 0;
}
