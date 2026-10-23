#include <stdio.h>

int main(void)
{
    char letter;

    scanf(" %c", &letter);
    printf("CODE_DEC: %d\n", letter);
    printf("CODE_HEX: %x\n", letter);
    printf("CODE_OCT: %o\n", letter);
    printf("UPPER: %c\n", letter - 'a' + 'A');
    printf("NEXT: %c\n", letter + 1);
    printf("PREV: %c\n", letter - 1);

    return 0;
}

/* Коды соседних букв отличаются на единицу, а разница между регистрами
   латинских букв постоянна, поэтому верхний регистр получен арифметически. */
