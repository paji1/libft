char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(s[j])
    {
        if (s[j] == c)
            i = j;
        j++;
    }
    return ((char *)s)+i;
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char tab[21] = "he1llo world";
    char c = 'o';
    printf("%s",ft_strrchr(tab,c));
    return 0;
}