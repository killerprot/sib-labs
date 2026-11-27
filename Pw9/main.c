#include <stdio.h>
#include "matrixfunc.h"

#define MAX_R 50
#define MAX_C 50

int main(void) {
    double mat[MAX_R][MAX_C];
    double mins[MAX_C];
    int cnts[MAX_R];
    size_t rows = 0, cols = 0;
    int ok = 0;
    char cmd;
    while (1) {
        printf("\na  Задать размер матрицы (строки, столбцы)\n");
        printf("b  Заполнить матрицу\n");
        printf("c  Представление матрицы (значения, адреса элементов)\n");
        printf("d  Максимальный элемент матрицы\n");
        printf("e  Минимальный элемент каждого столбца матрицы\n");
        printf("f  Количество элементов каждой строки выше среднего по строке\n");
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
                set_sz(&rows, &cols, MAX_R, MAX_C);
                ok = 0;
                break;
            case 'b':
                fill_mat((double *)mat, rows, cols, &ok);
                break;
            case 'c':
                if (!ok) printf("Матрица не заполнена\n");
                else prt_mat((double *)mat, rows, cols);
                break;
            case 'd':
                if (!ok) printf("Матрица не заполнена\n");
                else printf("Максимальный элемент: %.2lf\n", max_elem((double *)mat, rows, cols));
                break;
            case 'e':
                if (!ok) printf("Матрица не заполнена\n");
                else {
                    min_cols((double *)mat, rows, cols, mins);
                    for (size_t j = 0; j < cols; j++) {
                        printf("Столбец %zu: min = %.2lf\n", j, *(mins + j));
                    }
                }
                break;
            case 'f':
                if (!ok) printf("Матрица не заполнена\n");
                else {
                    cnt_row_above_avg((double *)mat, rows, cols, cnts);
                    for (size_t i = 0; i < rows; i++) {
                        printf("Строка %zu: выше среднего = %d\n", i, *(cnts + i));
                    }
                }
                break;
            default:
                printf("Неверный пункт меню\n");
        }
    }
    return 0;
}
