#include <stdio.h>
#include <stdint.h>

int main(void)
{
    long long values;           
    unsigned long long uvalues; 

    // int8_t
    values = (long long)INT8_MAX - (long long)INT8_MIN + 1;
    printf("INT8: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(int8_t), (long long)INT8_MIN, (long long)INT8_MAX, values);

    // uint8_t
    uvalues = (unsigned long long)UINT8_MAX - 0 + 1;
    printf("UINT8: size=%zu, min=%d, max=%llu, values=%llu\n",
           sizeof(uint8_t), 0, (unsigned long long)UINT8_MAX, uvalues);

    // int16_t
    values = (long long)INT16_MAX - (long long)INT16_MIN + 1;
    printf("INT16: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(int16_t), (long long)INT16_MIN, (long long)INT16_MAX, values);

    // uint16_t
    uvalues = (unsigned long long)UINT16_MAX - 0 + 1;
    printf("UINT16: size=%zu, min=%d, max=%llu, values=%llu\n",
           sizeof(uint16_t), 0, (unsigned long long)UINT16_MAX, uvalues);

    // int32_t
    values = (long long)INT32_MAX - (long long)INT32_MIN + 1;
    printf("INT32: size=%zu, min=%lld, max=%lld, values=%lld\n",
           sizeof(int32_t), (long long)INT32_MIN, (long long)INT32_MAX, values);

    // uint32_t
    uvalues = (unsigned long long)UINT32_MAX - 0 + 1;
    printf("UINT32: size=%zu, min=%d, max=%llu, values=%llu\n",
           sizeof(uint32_t), 0, (unsigned long long)UINT32_MAX, uvalues);

    /*
       Почему количество значений одинаковое?
       Тип размером N бит хранит ровно N бит информации, а значит может
       принимать 2^N разных комбинаций нулей и единиц. Например, 8 бит -
       это 2^8 = 256 комбинаций. Не важно, знаковый тип или нет - число
       комбинаций одинаково.

       Чем отличаются диапазоны?
       У беззнакового типа все комбинации используются для неотрицательных
       чисел: от 0 до 2^N - 1 (для 8 бит: от 0 до 255).
       У знакового типа комбинации делятся примерно поровну между
       отрицательными и неотрицательными числами: от -2^(N-1) до 2^(N-1) - 1
       (для 8 бит: от -128 до 127). Максимум знакового типа примерно
       вдвое меньше, зато есть отрицательные числа.
    */

    return 0;
}
