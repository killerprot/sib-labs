#include <stdio.h>

#define HEIGHT 5

int main(void) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT - 1 - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("@");
        }

        printf("\n");
    }

    return 0;
}
