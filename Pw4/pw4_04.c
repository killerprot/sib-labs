#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    int number;
    int even_count = 0;

    /* Вариант 24: количество чётных чисел среди N введённых чисел. */
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            even_count++;
        }
        i++;
    }
    printf("RESULT: %d\n", even_count);

    return 0;
}

/* Остаток от деления на 2 равен нулю у чётного числа.
   Счётчик увеличивается только для таких чисел. */
