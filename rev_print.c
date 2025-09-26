#include<unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
void    rev_print( char *s)
{
    int i = 0;
    while(s[i] != '\0')
    i++;
    while( i > 0)
    {
        i--;
        ft_putchar(s[i]);
    }
}

int main( int ac, char **av)
{
    if(ac == 2)
    {
        rev_print(av[1]);
    }
    write(1,"\n",1);
    return(0);
}
