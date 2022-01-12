#include <stdio.h>

int main()
{
    int div;
    int mod;

    div = 0;
    mod = 0;
    ft_div_mod(12, 8, &div, &mod);
    printf("test1 : a = 12, b = 8\n");
    div == 1 && mod == 4
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tdiv : '%d', expected : '1'\n\tmod: '%d', expected: '4'\n", div, mod);
    ft_div_mod(42, 5, &div, &mod);
    printf("test1 : a = 42, b = 5\n");
    div == 8 && mod == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tdiv : '%d', expected : '8'\n\tmod: '%d', expected: '2'\n", div, mod);
}