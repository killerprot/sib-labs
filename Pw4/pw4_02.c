#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t u;
    uint16_t r;
    float average;

    /* Вариант 12: отношение напряжения к сопротивлению. */
    scanf("%hu %hu", &u, &r);
    average = (float)u / r;

    printf("RESULT: %.2f\n", average);
    printf("SIZE_UINT16: %llu\n", (unsigned long long)sizeof(u));
    printf("SIZE_FLOAT: %llu\n", (unsigned long long)sizeof(average));

    return 0;
}

/* Явное приведение к float сохраняет дробную часть среднего результата.
   Без него деление целых чисел дало бы только целую часть. */
