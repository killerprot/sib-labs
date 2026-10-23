#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b;
    bool module_ready;
    bool fault_state;

    scanf("%d %d", &a, &b);

    module_ready = a;
    fault_state = b;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", module_ready + fault_state);

    /*
       Почему любое ненулевое число превращается в 1?
       Тип bool (в Си это _Bool) может хранить только два значения:
       0 (ложь) и 1 (истина). По правилам языка Си при преобразовании
       к bool проверяется, равно ли значение нулю. Если не равно нулю -
       результат 1, если равно - результат 0. Поэтому 7 превращается в 1,
       а 0 остаётся 0.
    */

    return 0;
}
