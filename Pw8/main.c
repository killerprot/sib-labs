#include <stdio.h>
#include "myarrfunc.h"

#define MAX_SZ 100

// bugs = fixing
// code = working
// grade = maximum
// iq = high
// linux = yes
// windows = fuuuu
// ubuntu =   ^
// mint = kakashka
// arch = legend
// neuroslop = off

int main(void) {
    int arr[MAX_SZ];
    size_t n = 0;
    int ok = 0;
    char cmd;
    while (1) {
        printf("\na  Задать размер массива\n");
        printf("b  Заполнить массив\n");
        printf("c  Представление массива (значения, адреса)\n");
        printf("d  Индекс последнего положительного элемента\n");
        printf("e  Количество элементов между двумя равными\n");
        printf("f  Количество элементов ниже среднего значения\n");
        printf("g  Выход\n");
        printf("Выберите пункт: ");
        if (scanf(" %c", &cmd) != 1) {
            printf("\nЗавершение по EOF\n");
            break;
        }
        clear_buf();
        if (cmd == 'g') break;
        switch (cmd) {
            case 'a':
                set_sz(&n, MAX_SZ);
                ok = 0;
                break;
            case 'b':
                fill_arr(arr, n, &ok);
                break;
            case 'c':
                if (!ok) printf("Массив не заполнен\n");
                else prt_arr(arr, n);
                break;
            case 'd':
                if (!ok) printf("Массив не заполнен\n");
                else {
                    int res = last_pos_idx(arr, n);
                    if (res == -1) printf("Положительных элементов нет\n");
                    else printf("Индекс: %d\n", res);
                }
                break;
            case 'e':
                if (!ok) printf("Массив не заполнен\n");
                else {
                    int res = cnt_btw_eq(arr, n);
                    if (res == -1) printf("Одинаковых элементов нет\n");
                    else printf("Элементов между равными: %d\n", res);
                }
                break;
            case 'f':
                if (!ok) printf("Массив не заполнен\n");
                else printf("Элементов ниже среднего: %d\n", cnt_less_avg(arr, n));
                break;
            default:
                printf("Неверный пункт меню\n");
        }
    }
    return 0;
}
