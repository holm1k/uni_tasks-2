#include <stdio.h>

int main() {
    double x = 3.0e-23, gram, res;
    int y;
    printf("Your value:");
    scanf("%d", &y);
    gram = y * 950;
    res = gram / x;
    printf("result: %lf\n", res);
    return 0;

}