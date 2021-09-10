#include<stdio.h>
void bzero(void *s, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}
// int main(int argc, char const *argv[])
// {
//     int tab[12] = {88888899,111111111,12,2};
//     bzero(tab,3);
//     for (int i = 0; i < 4; i++)
//     {
//             printf("%d\t", tab[i]);        
//     }
    

//     return 0;
// }