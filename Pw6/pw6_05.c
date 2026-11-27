#include <stdio.h>

int main(void) {
    int item;
    double val;

    while (1) {
        printf("1. Pa -> atm\n2. atm -> bar\n3. bar -> psi\n4. mmHg -> Pa\n5. Exit\n");
        
        if (scanf("%d", &item) != 1) {
            while (getchar() != '\n');
            printf("Error\n");
            continue;
        }
        while (getchar() != '\n');

        if (item == 5) {
            break;
        }

        if (item < 1 || item > 4) {
            printf("Error\n");
            continue;
        }

        if (scanf("%lf", &val) != 1) {
            while (getchar() != '\n');
            printf("Error\n");
            continue;
        }
        while (getchar() != '\n');

        switch (item) {
            case 1:
                printf("%.4f atm\n", val / 101325.0);
                break;
            case 2:
                printf("%.4f bar\n", val * 1.01325);
                break;
            case 3:
                printf("%.4f psi\n", val * 14.5038);
                break;
            case 4:
                printf("%.4f Pa\n", val * 133.322);
                break;
        }
    }

    return 0;
}
