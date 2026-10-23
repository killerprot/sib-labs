#include <stdio.h>

#define CM_IN_M 100

int main(void)
{
    long long centimeters;

    /* Вариант 5: сантиметры переводятся в метры и сантиметры. */
    while (scanf("%lld", &centimeters) == 1 && centimeters > 0) {
        printf("%lld m %lld cm\n", centimeters / CM_IN_M, centimeters % CM_IN_M);
    }

    return 0;
}

/* При целочисленном делении дробная часть отбрасывается, поэтому / даёт
   старшие единицы, а % оставляет остаток в младших единицах. */
