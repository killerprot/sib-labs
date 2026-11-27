#include <stdio.h>

long long big_rc(int n) {
    if (n == 0) return 1;
    long long res = big_rc(n - 1);
    for (int k = 0; k < n; k++) {
        res += big_rc(k) * big_rc(n - 1 - k);
    }
    return res;
}

long long big_it(int n) {
    long long s[30];
    s[0] = 1;
    for (int i = 1; i <= n; i++) {
        s[i] = s[i - 1];
        for (int k = 0; k < i; k++) {
            s[i] += s[k] * s[i - 1 - k];
        }
    }
    return s[n];
}

long long sml_rc(int n) {
    if (n == 0 || n == 1) return 1;
    return ((6 * n - 3) * sml_rc(n - 1) - (n - 2) * sml_rc(n - 2)) / (n + 1);
}

long long sml_it(int n) {
    if (n == 0 || n == 1) return 1;
    long long a = 1, b = 1, c = 1;
    for (int i = 2; i <= n; i++) {
        c = ((6 * i - 3) * b - (i - 2) * a) / (i + 1);
        a = b;
        b = c;
    }
    return c;
}

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n >= 0 && n < 30) {
        printf("S_n: rec = %lld | it = %lld\n", big_rc(n), big_it(n));
        printf("s_n: rec = %lld | it = %lld\n", sml_rc(n), sml_it(n));
    } else {
        printf("Err\n");
    }
    return 0;
}
