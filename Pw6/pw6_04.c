#include <stdio.h>

int main(void) {
    double amount;
    scanf("%lf", &amount);

    double t1 = 0.0;
    double t2 = 0.0;
    double t3 = 0.0;

    if (amount <= 10000.0) {
        t1 = amount * 0.04;
    } else if (amount <= 30000.0) {
        t1 = 10000.0 * 0.04;
        t2 = (amount - 10000.0) * 0.06;
    } else {
        t1 = 10000.0 * 0.04;
        t2 = 20000.0 * 0.06;
        t3 = (amount - 30000.0) * 0.08;
    }

    double total = t1 + t2 + t3;

    printf("Сделка: %.2f\n", amount);
    printf("Ступень 1 (4%%): %.2f\n", t1);
    printf("Ступень 2 (6%%): %.2f\n", t2);
    printf("Ступень 3 (8%%): %.2f\n", t3);
    printf("Итого комиссия: %.2f\n", total);

    return 0;
}
