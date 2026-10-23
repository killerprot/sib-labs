#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    const char text[] = "Сбой матрицы";
    const wchar_t wide_text[] = L"Сбой матрицы";

    setlocale(LC_ALL, "");
    printf("char -> sizeof: %llu bytes, strlen: %llu chars\n",
           (unsigned long long)sizeof(text),
           (unsigned long long)strlen(text));
    printf("wchar -> sizeof: %llu bytes, wcslen: %llu chars\n",
           (unsigned long long)sizeof(wide_text),
           (unsigned long long)wcslen(wide_text));

    return 0;
}

/* char хранит UTF-8 по байтам, а wchar_t хранит широкие символы.
   strlen считает байты, wcslen считает широкие символы без нуль-терминатора. */
