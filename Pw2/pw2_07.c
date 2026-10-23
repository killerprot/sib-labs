#include <stdio.h>

int main(void)
{
    long double ld;
    double d;
    float f;


    scanf("%Lf", &ld);

    d = ld;
    f = ld;

    printf("FLOAT: %.6f\n", f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);

    printf("FLOAT+1: %.6f\n", f + 1);
    printf("DOUBLE+1: %.6f\n", d + 1);
    printf("LDOUBLE+1: %.6Lf\n", ld + 1);

    /*
       Почему +1 не видно у float?
       Число 123456789 имеет 9 цифр до запятой. У float примерно
       6-7 значащих цифр, поэтому он не может различить соседние числа
       в этом диапазоне: шаг между ними около 8. Число 123456792 + 1
       округляется обратно к 123456792, и прибавление единицы пропадает.
       У double примерно 15-16 значащих цифр, а у long double примерно
       18-19, поэтому они хранят и целую, и дробную часть, и прибавление
       единицы хорошо видно.
    */

    return 0;
}
