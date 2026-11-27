#include <stdio.h>

double sin(double x) {
    double term = x;   
    double sum = x;    
    double x2 = x * x;

    for (int i = 1; i <= 10; i++) {
        double den = (2 * i) * (2 * i + 1);
        term = -term * x2 / den;
        sum += term;
    }
    return sum;
}

int main(void) {
    
    double A = 0.0;  
    double B = 3.141592;  
    double H = 0.5;  
    
    printf("%-10s | %-10s | %-10s\n", "Номер", "X", "Y");
    printf("---------------------------------------\n");

    int it = 1;

    for (double x = A; x <= B; x += H) {
        
        double y = sin(x);
        
        printf("%-10d | %-10.4f | %-10.4f\n", it, x, y);
        
        it++;
    }

    return 0;
}
