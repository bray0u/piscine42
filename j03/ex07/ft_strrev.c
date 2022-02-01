#include <stdio.h>

void main()
{
    char str[27];
    char *res;
    int i;

    str[0] = 'a';
    i = 1;
    while (str[i - 1] != 'z')
    {
        str[i] = str[i - 1] + 1;
        i++;
    }
    str[i] = 0;

    printf("%s\n",str);
    res = ft_strrev(str);
    printf("%s\n",res);
}