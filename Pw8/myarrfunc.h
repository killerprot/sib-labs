#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

void clear_buf(void);
void set_sz(size_t *n, size_t max_n);
void fill_arr(int *arrptr, size_t n, int *ok);
void prt_arr(int *arrptr, size_t n);
int last_pos_idx(int *arrptr, size_t n);
int cnt_btw_eq(int *arrptr, size_t n);
int cnt_less_avg(int *arrptr, size_t n);

#endif
