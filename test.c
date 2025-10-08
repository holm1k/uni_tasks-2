#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Переполнение int
    int maxInt = INT_MAX;
    printf("Максимальное значение int: %d\n", maxInt);
    printf("Переполнение int (maxInt + 1): %d\n\n", maxInt + 1);

    // Переполнение float
    float maxFloat = FLT_MAX;
    printf("Максимальное значение float: %e\n", maxFloat);
    printf("Переполнение float (maxFloat * 2): %e\n\n", maxFloat * 2.0f);

    // Потеря значимости
    double a = 1.0000001;
    double b = 1.0000000;
    double c = a - b;

    printf("Вычитание близких чисел: %.10f - %.10f = %.10f\n", a, b, c);

    double large = 1234567.0;
    double small = 1.0;
    printf("(large + small) - large = %.10f\n", (large + small) - large);

    return 0;
}