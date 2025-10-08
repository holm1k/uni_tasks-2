#include <stdio.h>

int main() {
    float sm = 2.54, res, dum;
    printf("Your height in dum:");
    scanf("%f", &dum);
    res = sm * dum;
    printf("Your height in sm: %f\n", res);
    return 0;
}