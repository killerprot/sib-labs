#include <stdio.h>
#include <string.h>

int main(void)
{
    char latin[20] = "SibSUTIS";
    char cyrillic[20] = "СибГУТИ";

    printf("LATIN\n");
    printf("SIZEOF: %llu\n", (unsigned long long)sizeof(latin));
    printf("STRLEN: %llu\n", (unsigned long long)strlen(latin));
    printf("FREE_BYTES: %llu\n", (unsigned long long)(sizeof(latin) - strlen(latin) - 1));

    printf("CYRILLIC\n");
    printf("SIZEOF: %llu\n", (unsigned long long)sizeof(cyrillic));
    printf("STRLEN: %llu\n", (unsigned long long)strlen(cyrillic));
    printf("FREE_BYTES: %llu\n", (unsigned long long)(sizeof(cyrillic) - strlen(cyrillic) - 1));

    return 0;
}

/* sizeof показывает размер всего массива, а strlen считает байты до нуль-терминатора.
   Для кириллицы strlen считает байты UTF-8, поэтому результат больше числа букв. */
