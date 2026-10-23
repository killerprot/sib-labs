#include <stdio.h>
#include <string.h>

#define DISTRO "LinuxDistro"

int main(void)
{
    const char release_date[] = "2026";

    printf("DISTRO: %s\n", DISTRO);
    printf("RDATE: %s\n", release_date);
    printf("STRLEN: %llu\n", (unsigned long long)strlen(DISTRO));
    printf("SIZEOF: %llu\n", (unsigned long long)sizeof(DISTRO));

    return 0;
}

/* strlen не считает нуль-терминатор, а sizeof строкового литерала считает его.
   Поэтому размер литерала на один байт больше его длины. */
