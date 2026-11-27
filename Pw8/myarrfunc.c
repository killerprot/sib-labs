#include <stdio.h>
#include "myarrfunc.h"

void clear_buf(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

void set_sz(size_t *n, size_t max_n) {
    size_t tmp;
    printf("Введите размер (1-%zu): ", max_n);
    if (scanf("%zu", &tmp) == 1 && tmp > 0 && tmp <= max_n) {
        *n = tmp;
    } else {
        printf("Ошибка размера\n");
    }
    clear_buf();
}

void fill_arr(int *arrptr, size_t n, int *ok) {
    if (n == 0) {
        printf("Сначала задайте размер (пункт a)\n");
        return;
    }
    printf("Введите %zu целых чисел: ", n);
    for (size_t i = 0; i < n; i++) {
        if (scanf("%d", arrptr + i) != 1) {
            printf("Ошибка ввода числа\n");
            clear_buf();
            return;
        }
    }
    clear_buf();
    *ok = 1;
}

void prt_arr(int *arrptr, size_t n) {
    if (n == 0) {
        printf("Массив пуст\n");
        return;
    }
    for (size_t i = 0; i < n; i++) {
        printf("[%zu] val = %d | addr = %p\n", i, *(arrptr + i), (arrptr + i));
    }
}

int last_pos_idx(int *arrptr, size_t n) {
    int idx = -1;
    for (size_t i = 0; i < n; i++) {
        if (*(arrptr + i) > 0) idx = i;
    }
    return idx;
}

int cnt_btw_eq(int *arrptr, size_t n) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if (*(arrptr + i) == *(arrptr + j)) return j - i - 1;
        }
    }
    return -1;
}

int cnt_less_avg(int *arrptr, size_t n) {
    if (n == 0) return -1;
    double sum = 0.0;
    for (size_t i = 0; i < n; i++) sum += *(arrptr + i);
    double avg = sum / n;
    int cnt = 0;
    for (size_t i = 0; i < n; i++) {
        if (*(arrptr + i) < avg) cnt++;
    }
    return cnt;
}
