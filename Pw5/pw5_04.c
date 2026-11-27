#include <stdio.h>

#define SIZE 8
int main(void) {
    double arr[SIZE];
    double sum = 0.0;

    for (int i = 0; i < SIZE; i++) {
        arr[i] = 1.0 / (i + 1);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    double avg = sum / SIZE;

    printf("%.2f\n", avg);

    return 0;
}
