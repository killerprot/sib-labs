#include <stdio.h>
#include "matrixfunc.h"

void clear_buf(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

void set_sz(size_t *rows, size_t *cols, size_t max_r, size_t max_c) {
    size_t r, c;
    printf("Введите размеры (строки столбцы, 1-%zu 1-%zu): ", max_r, max_c);
    if (scanf("%zu %zu", &r, &c) == 2 && r > 0 && r <= max_r && c > 0 && c <= max_c) {
        *rows = r;
        *cols = c;
    } else {
        printf("Ошибка размеров\n");
    }
    clear_buf();
}

void fill_mat(double *matptr, size_t rows, size_t cols, int *ok) {
    if (rows == 0 || cols == 0) {
        printf("Сначала задайте размеры (пункт a)\n");
        return;
    }
    printf("Введите %zu чисел (%zux%zu):\n", rows * cols, rows, cols);
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (scanf("%lf", matptr + i * cols + j) != 1) {
                printf("Ошибка ввода числа\n");
                clear_buf();
                return;
            }
        }
    }
    clear_buf();
    *ok = 1;
}

void prt_mat(double *matptr, size_t rows, size_t cols) {
    if (rows == 0 || cols == 0) {
        printf("Матрица пуста\n");
        return;
    }
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            double *el = matptr + i * cols + j;
            printf("%8.2lf (%p)   ", *el, (void *)el);
        }
        printf("\n");
    }
}

double max_elem(double *matptr, size_t rows, size_t cols) {
    double mx = *matptr;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            double val = *(matptr + i * cols + j);
            if (val > mx) mx = val;
        }
    }
    return mx;
}

void min_cols(double *matptr, size_t rows, size_t cols, double *res) {
    for (size_t j = 0; j < cols; j++) {
        double mn = *(matptr + j);
        for (size_t i = 1; i < rows; i++) {
            double val = *(matptr + i * cols + j);
            if (val < mn) mn = val;
        }
        *(res + j) = mn;
    }
}

void cnt_row_above_avg(double *matptr, size_t rows, size_t cols, int *res) {
    for (size_t i = 0; i < rows; i++) {
        double sum = 0.0;
        for (size_t j = 0; j < cols; j++) {
            sum += *(matptr + i * cols + j);
        }
        double avg = sum / cols;
        int cnt = 0;
        for (size_t j = 0; j < cols; j++) {
            if (*(matptr + i * cols + j) > avg) cnt++;
        }
        *(res + i) = cnt;
    }
}
