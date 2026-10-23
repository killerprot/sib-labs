#include <stdio.h>
#include <string.h>

int main(void)
{
    const char text[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", text);
    printf("STRLEN: %llu\n", (unsigned long long)strlen(text));
    printf("SIZEOF: %llu\n", (unsigned long long)sizeof(text));

    return 0;
}

/* Шестнадцатеричные коды образуют Hello и World, \t вставляет табуляцию,
   а \n переводит курсор на новую строку. sizeof также учитывает \0. */
