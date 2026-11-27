#include <stdio.h>

void spdkzvk(int *a, int *b) {
    *a = (*a) * (*b);
}

int main(void) {
    int fst = 6;
    int scd = 7;
    printf("До: %d, %d\n", fst, scd);
    spdkzvk(&fst, &scd);
    printf("После: %d, %d\n", fst, scd);
    return 0;
}
