#include <stdio.h>

int main(void)
{
    char text[100];
    int width;

    scanf("%99s %d", text, &width);
    printf("%*s\n", width, text);
    printf("%-*s\n", width + 5, text);

    return 0;
}

/* Звёздочка в printf означает, что ширина поля берётся из аргумента.
   Вторая строка использует ширину на пять символов больше и левое выравнивание. */
