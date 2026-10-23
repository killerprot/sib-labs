#include <stdio.h>

double kb_to_mb(double kilobytes)
{
    const double kilobytes_in_megabyte = 1024.0;

    return kilobytes / kilobytes_in_megabyte;
}

int main(void)
{
    double kilobytes;

    /* Вариант 28: перевод килобайт в мегабайты. */
    while (scanf("%lf", &kilobytes) == 1) {
        printf("%.2f MB\n", kb_to_mb(kilobytes));
    }

    return 0;
}

/* Функция принимает double для большей точности вычислений.
   Проверка результата scanf останавливает цикл при EOF или ошибочном вводе,
   поэтому программа не зацикливается на неподходящем символе. */
