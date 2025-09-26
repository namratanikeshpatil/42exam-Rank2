#include<stdio.h>
void	ft_swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main(void)
{
    int c = 10;
    int d = 15;
    ft_swap(&c,&d);
    printf("a =%d\nb =%d\n", c,d);
    return(0);
}