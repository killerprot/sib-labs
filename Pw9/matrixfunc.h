#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H

#include <stddef.h>

void clear_buf(void);
void set_sz(size_t *rows, size_t *cols, size_t max_r, size_t max_c);
void fill_mat(double *matptr, size_t rows, size_t cols, int *ok);
void prt_mat(double *matptr, size_t rows, size_t cols);
double max_elem(double *matptr, size_t rows, size_t cols);
void min_cols(double *matptr, size_t rows, size_t cols, double *res);
void cnt_row_above_avg(double *matptr, size_t rows, size_t cols, int *res);

#endif
