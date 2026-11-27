#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int lts = 0;
    int dgts = 0;
    int sps = 0;
    int pts = 0;
    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            lts++;
        } else if (isdigit(ch)) {
            dgts++;
        } else if (isspace(ch)) {
            sps++;
        } else if (ispunct(ch)) {
            pts++;
        }
    }
    printf("\n");
    printf("Букв: %d\n", lts);
    printf("Цифр: %d\n", dgts);
    printf("Пробельных символов: %d\n", sps);
    printf("Знаков препинания: %d\n", pts);
    return 0;
}
