#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // переполнение 
    int full_number=INT_MAX;
    printf("%d\n", full_number + 1);

    float full_float=FLT_MAX;
    printf("%f\n", full_float*2);

    double a = 1.000000000001;
    double b = 1.000000000000;
    double c = a - b;
    printf("%f\n", c);

    double big = 123456789429308403204039.0;
    double litle = 1.0;
    double res = (big + litle) - big;
    printf("%f\n", res);

    return 0;
}