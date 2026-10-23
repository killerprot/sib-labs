#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("FLOAT: size=%zu, digits=%d, max=%e\n",
           sizeof(float), FLT_DIG, FLT_MAX);

    printf("DOUBLE: size=%zu, digits=%d, max=%e\n",
           sizeof(double), DBL_DIG, DBL_MAX);

    // Для long double используется %Le
    printf("LDOUBLE: size=%zu, digits=%d, max=%Le\n",
           sizeof(long double), LDBL_DIG, LDBL_MAX);

    /*
       Замечания:
       - Количество цифр показателя степени (после буквы e) в выводе
         может отличаться в зависимости от системы: например, e+38 или e+038.
       - На некоторых платформах (например, в Visual Studio / MSVC)
         long double может совпадать по размеру с double (8 байт),
         поэтому и максимальное значение будет таким же, как у double.
    */

    return 0;
}
