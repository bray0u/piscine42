#include <stdio.h>

int main()
{
    int nbr;
    int *nbr1;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;

    nbr = 0;
    nbr1 = &nbr;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    ft_ultimate_ft(&nbr8);
    nbr == 42
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong, nbr is set to '%d'\n", nbr);
}