char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if (*s == c)
            return (char *)s;
        s++;
    }
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char tab[21] = "he1llo world";
    char c = 'l';
    printf("%s",ft_strchr(tab,c));
    return 0;
}
