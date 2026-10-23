#include <stdio.h>
#include <limits.h>

int main(void)
{
    int range_ok;

    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    range_ok = ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX);

    printf("RANGE_OK: %d\n", range_ok);

    /*
       Почему нужно приведение к беззнаковому типу?
       Если считать INT_MAX * 2 в обычном int, то результат (4294967294)
       не помещается в int - произойдёт переполнение знакового числа,
       а это неопределённое поведение (результат не гарантирован).
       У беззнаковых типов переполнения такого рода нет, и в unsigned int
       результат 4294967295 помещается без проблем. Поэтому сначала
       приводим INT_MAX к unsigned int, а потом умножаем.
    */

    return 0;
}
