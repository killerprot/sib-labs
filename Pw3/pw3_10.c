#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    wchar_t first[100];
    wchar_t second[100];
    wchar_t third[100];

    setlocale(LC_ALL, "");
    wscanf(L"%99ls %99ls %99ls", first, second, third);
    wprintf(L"%-15ls|%20ls|%.5ls\n", first, second, third);

    return 0;
}

/* Поле первого модуля выровнено влево, второго вправо, а точность %.5ls
   ограничивает третью строку пятью широкими символами. */
