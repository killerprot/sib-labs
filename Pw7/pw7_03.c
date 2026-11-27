#include <stdio.h>

double func(double a, double b) {
    double sum = a * a + b * b;
    if (sum == 0.0) return 0.0;
    double x = sum;
    double eps = 0.000001;
    while ((x * x - sum) > eps || (sum - x * x) > eps) {
        x = 0.5 * (x + sum / x);
    }
    return x;
}

int main(void) {
    double a, b;
    if (scanf("%lf %lf", &a, &b) == 2) {
        printf("%.4f\n", func(a, b));
    } else {
        printf("Ошибка ввода\n");
    }
    return 0;
}
