#include <stdio.h>

int main() {
    float cup, pint, ync, stl, chl;
    printf("Сколько чашек:");
    scanf("%f", &cup);
    pint= cup / 2;
    ync = cup * 8;
    stl = ync * 2;
    chl = stl * 3; 
    printf("Пинты: %f\nУнции: %f\nСтоловая ложка: %f\nЧайная ложка: %f\n", pint, ync, stl, chl);
    return 0;
}