#include <stdio.h>

double f(int i) {
    return i / (i + 1.0);
}

int main(void) {
    int n = 1;

    while (1) {
        scanf("%d", &n);

        if (n <= 0) {
            break;
        }

        double sum = 0.0;

        for (int i = 1; i <= n; i++) {
            sum += f(i);
        }

        printf("%.6f\n", sum);
    }

    return 0;
}
