#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int atoiresult;

    num = ft_atoi("42");
    atoiresult = atoi("42");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("-42");
    atoiresult = atoi("-42");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("0");
    atoiresult = atoi("0");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);
        
    num = ft_atoi("coucou17");
    atoiresult = atoi("coucou17");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("17coucou");
    atoiresult = atoi("17coucou");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);
}