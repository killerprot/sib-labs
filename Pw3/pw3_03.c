#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];

    scanf("%99s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s%s%*s\"\n", 5, "", name, 5, "");

    return 0;
}

/* Ширина поля задаётся между % и s, а знак минус выравнивает текст влево.
   В последней строке имя помещено между пятью пробелами с каждой стороны. */
