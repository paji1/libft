#include<string.h>
#include<stdio.h>
void *ft_memset(void *ptr, int x, size_t n)
{
    size_t t;

    t = 0;
    while (t < n)
    {
        ((unsigned char *)ptr)[t] = x;
        t++;
    }
    return ptr;
}
int main(int argc, char const *argv[])
{
    char r[24];

    int t = 0;
    memset(r,49,42);
    while(t< 5)
    {
        printf("%c\t",r[t]);
        t++;
    }

    return 0;
}
