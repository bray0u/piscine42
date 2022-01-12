#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void ft_putstr(char *str)
{
    int len;

    len = ft_strlen(str);
    write(1, str, len);
}

char *ft_strrev(char *str)
{
    
    return (str);
}

void main()
{
    char *str;

    str = ft_strrev("abcdefghiklmnopqrstuvwxyz");
    ft_putstr(str);
    write(1, "\n", 1);
}