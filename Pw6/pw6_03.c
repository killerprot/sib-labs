#include <stdio.h>

int main(void) {
    int num;
    int c1 = 0, c2 = 0;
    int s1 = 0, s2 = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }

        int temp = num < 0 ? -num : num;
        int last = temp % 10;
        int first = temp;

        while (first >= 10) {
            first /= 10;
        }

        if (first > last) {
            c1++;
            s1 += num;
        } else if (first < last) {
            c2++;
            s2 += num;
        }
    }

    double avg1 = c1 > 0 ? (double)s1 / c1 : 0.0;
    double avg2 = c2 > 0 ? (double)s2 / c2 : 0.0;

    printf("Группа 1 (первая > последняя): %d, среднее: %.2f\n", c1, avg1);
    printf("Группа 2 (первая < последняя): %d, среднее: %.2f\n", c2, avg2);

    return 0;
}
