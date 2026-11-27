#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        putchar(ch);
    }
    return 0;
}
