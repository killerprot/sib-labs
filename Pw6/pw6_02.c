#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

/*
Разница между getchar() и getwchar():
getchar() считывает ровно 1 байт. В многобайтовых кодировках (например, UTF-8) 
русские буквы занимают по 2 байта, поэтому getchar() разрывает символ наполовину, 
что ломает логику.
getwchar() считывает символ целиком (все 2 или 4 байта), превращая его в широкий 
тип wchar_t, что позволяет корректно работать с любыми алфавитами.
*/

int main(void) {
    setlocale(LC_ALL, "");

    wint_t ch;
    int digits = 0;
    int letters = 0;
    int others = 0;

    while ((ch = getwchar()) != L'#') {
        if (iswdigit(ch)) {
            digits++;
        } else if (iswalpha(ch)) {
            letters++;
        } else {
            others++;
        }
    }

    printf("Digits: %d\n", digits);
    printf("Letters: %d\n", letters);
    printf("Others: %d\n", others);

    return 0;
}
