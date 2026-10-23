#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    wchar_t codename[100];

    setlocale(LC_ALL, "");
    if (wscanf(L"%99ls", codename) == 1) {
        wprintf(L"Агент %ls авторизован в системе\n", codename);
    }

    return 0;
}

/* Локаль нужна для правильного преобразования русских символов.
   Спецификатор %ls читает строку в массив wchar_t, а wprintf выводит её. */
