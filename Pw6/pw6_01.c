#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int sum = 0;

    while ((ch = getchar()) != '#') {
        if (isdigit(ch)) {
            sum += ch;
        }
    }

    printf("Sum of ASCII codes: %d\n", sum);

    return 0;
}
